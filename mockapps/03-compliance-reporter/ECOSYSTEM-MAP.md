# Compliance Reporter - Ecosystem Integration

## simple_* Dependencies

### Required Libraries

| Library | Purpose | Integration Point |
|---------|---------|-------------------|
| simple_scheduler | Check scheduling | COMPLIANCE_ENGINE schedules automated checks |
| simple_sql | Compliance database | All persistence: checks, evidence, findings, audits |
| simple_json | Framework/check definitions | Load frameworks, export evidence packages |
| simple_hash | Evidence integrity | SHA-256 hashing for evidence verification |
| simple_cli | Command-line interface | COMPLIANCE_CLI |
| simple_logger | Audit logging | Check execution logs, daemon logs |
| simple_config | Configuration management | Settings, paths, retention policies |
| simple_process | Check command execution | Run compliance check scripts |

### Optional Libraries

| Library | Purpose | When Needed |
|---------|---------|-------------|
| simple_email | Alert notifications | When alerts configured |
| simple_template | Report generation | For HTML/custom report formats |
| simple_csv | CSV export | When --output csv specified |
| simple_datetime | Date handling | Audit periods, due dates |
| simple_uuid | Evidence IDs | For unique evidence identifiers |

## Integration Patterns

### simple_scheduler Integration

**Purpose:** Schedule automated compliance checks according to cron expressions.

**Usage:**
```eiffel
class COMPLIANCE_ENGINE

feature {NONE} -- Initialization

    make
        do
            create scheduler.make
            create scheduler_listener.make (Current)
            scheduler.add_listener (scheduler_listener)
        end

feature -- Scheduling

    schedule_check (a_check: COMPLIANCE_CHECK)
            -- Schedule check according to its cron expression.
        require
            check_has_schedule: a_check.has_schedule
        local
            l_job: SIMPLE_JOB
            l_agent: PROCEDURE
        do
            l_agent := agent run_check (a_check.id)
            create l_job.make_with_name (
                "check_" + a_check.id,
                a_check.name,
                l_agent
            )
            scheduler.schedule_cron (l_job, a_check.schedule)
        end

    schedule_all_checks
            -- Schedule all enabled checks with schedules.
        do
            across check_store.all_scheduled_checks as check loop
                schedule_check (check)
            end
        end

feature -- Execution

    run_check (a_check_id: STRING)
            -- Execute compliance check and record results.
        local
            l_check: COMPLIANCE_CHECK
            l_result: COMPLIANCE_CHECK_RESULT
            l_evidence: COMPLIANCE_EVIDENCE
        do
            l_check := check_store.load_check (a_check_id)
            l_result := execute_check (l_check)

            -- Collect evidence
            l_evidence := collect_evidence (l_check, l_result)
            evidence_store.save (l_evidence)

            -- Create finding if failed
            if not l_result.passed then
                create_finding (l_check, l_result)
            end

            -- Record in audit trail
            audit_trail.record ("check_executed", "check", a_check_id,
                "status=" + l_result.status + ";evidence_hash=" + l_evidence.content_hash)
        end

feature {NONE} -- Implementation

    scheduler: SIMPLE_SCHEDULER
    check_store: COMPLIANCE_CHECK_STORE
    evidence_store: COMPLIANCE_EVIDENCE_STORE
    audit_trail: COMPLIANCE_AUDIT_TRAIL

end
```

**Data flow:** Check definition -> SIMPLE_SCHEDULER -> Check execution -> Evidence collection

### simple_hash Integration

**Purpose:** Cryptographic verification of evidence integrity.

**Usage:**
```eiffel
class COMPLIANCE_EVIDENCE

feature -- Creation

    make (a_content: STRING; a_source: STRING)
        do
            content := a_content
            source := a_source
            create collected_at.make_now
            content_hash := compute_hash
        end

feature -- Hashing

    compute_hash: STRING
            -- Compute SHA-256 hash of evidence.
        local
            l_hasher: SIMPLE_HASH
        do
            create l_hasher.make_sha256
            l_hasher.update_string (content)
            l_hasher.update_string (source)
            l_hasher.update_string (collected_at.to_iso8601)
            Result := l_hasher.hexdigest
        ensure
            valid_hash: Result.count = 64  -- SHA-256 hex length
        end

    verify_integrity: BOOLEAN
            -- Verify evidence has not been modified.
        do
            Result := compute_hash.same_string (content_hash)
        end

feature -- Attributes

    content: STRING
    source: STRING
    collected_at: SIMPLE_DATE_TIME
    content_hash: STRING

invariant
    hash_computed: not content_hash.is_empty

end
```

**Data flow:** Evidence content -> SHA-256 hash -> Stored with evidence -> Verified on retrieval

### simple_sql Integration

**Purpose:** Persistent storage for all compliance data.

**Usage:**
```eiffel
class COMPLIANCE_CHECK_STORE

feature -- Queries

    all_checks_for_control (a_control_id: STRING): ARRAYED_LIST [COMPLIANCE_CHECK]
            -- Get all checks for a control.
        do
            create Result.make (10)
            db.query ("SELECT * FROM checks WHERE control_id = ? AND is_enabled = 1",
                <<a_control_id>>)
            across db.results as row loop
                Result.extend (check_from_row (row))
            end
        end

    compliance_summary (a_framework_id: STRING): COMPLIANCE_SUMMARY
            -- Get compliance summary for framework.
        do
            create Result.make

            -- Total controls
            db.query ("SELECT COUNT(*) FROM controls WHERE framework_id = ?",
                <<a_framework_id>>)
            Result.total_controls := db.integer_result

            -- Passed controls (all checks passed in last run)
            db.query ("SELECT COUNT(DISTINCT control_id) FROM checks c "
                + "WHERE c.control_id IN (SELECT id FROM controls WHERE framework_id = ?) "
                + "AND NOT EXISTS (SELECT 1 FROM check_runs cr "
                + "WHERE cr.check_id = c.id AND cr.status != 'passed' "
                + "AND cr.started_at > datetime('now', '-7 days'))",
                <<a_framework_id>>)
            Result.compliant_controls := db.integer_result

            -- Open findings
            db.query ("SELECT COUNT(*) FROM findings f "
                + "JOIN controls c ON f.control_id = c.id "
                + "WHERE c.framework_id = ? AND f.status = 'open'",
                <<a_framework_id>>)
            Result.open_findings := db.integer_result
        end

feature {NONE} -- Implementation

    db: SIMPLE_SQL

end
```

**Data flow:** Compliance data <-> SQLite database

### simple_json Integration

**Purpose:** Load framework definitions and export evidence packages.

**Usage:**
```eiffel
class COMPLIANCE_FRAMEWORK_LOADER

feature -- Loading

    load_framework (a_path: STRING): COMPLIANCE_FRAMEWORK
            -- Load framework from JSON file.
        local
            l_json: SIMPLE_JSON
            l_content: STRING
        do
            create l_json.make
            l_content := file_content (a_path)

            if l_json.parse (l_content) and then
               attached {SIMPLE_JSON_OBJECT} l_json.root as root then

                create Result.make (
                    root.object_item ("framework").string_item ("id"),
                    root.object_item ("framework").string_item ("name")
                )

                -- Load categories and controls
                if attached {SIMPLE_JSON_ARRAY} root.item ("categories") as cats then
                    across cats as cat loop
                        load_category (Result, cat)
                    end
                end
            end
        end

feature -- Export

    export_evidence_package (a_audit_id: INTEGER): STRING
            -- Export evidence package as JSON.
        local
            l_json: SIMPLE_JSON
            l_root: SIMPLE_JSON_OBJECT
            l_evidence_array: SIMPLE_JSON_ARRAY
        do
            create l_json.make
            create l_root.make

            l_root.put_string ("audit_id", a_audit_id.out)
            l_root.put_string ("generated_at", create {SIMPLE_DATE_TIME}.make_now.to_iso8601)

            create l_evidence_array.make
            across evidence_store.all_for_audit (a_audit_id) as ev loop
                l_evidence_array.extend (evidence_to_json (ev))
            end
            l_root.put_array ("evidence", l_evidence_array)

            l_json.set_root (l_root)
            Result := l_json.to_string_pretty
        end

end
```

**Data flow:** Framework JSON -> Parser -> COMPLIANCE_FRAMEWORK objects

### simple_template Integration

**Purpose:** Generate formatted compliance reports.

**Usage:**
```eiffel
class COMPLIANCE_REPORT_GENERATOR

feature -- Generation

    generate_summary_report (a_audit: COMPLIANCE_AUDIT): STRING
            -- Generate summary report from template.
        local
            l_template: SIMPLE_TEMPLATE
            l_context: HASH_TABLE [ANY, STRING]
        do
            create l_template.make_from_file ("templates/summary_report.html")
            create l_context.make (10)

            l_context.put (a_audit.framework.name, "framework_name")
            l_context.put (a_audit.started_at.to_formatted, "audit_date")
            l_context.put (a_audit.total_checks.out, "total_checks")
            l_context.put (a_audit.passed_checks.out, "passed_checks")
            l_context.put (a_audit.compliance_percentage.out, "compliance_rate")
            l_context.put (findings_html (a_audit), "findings_section")
            l_context.put (evidence_summary_html (a_audit), "evidence_section")

            Result := l_template.render (l_context)
        end

    generate_evidence_package (a_audit: COMPLIANCE_AUDIT): STRING
            -- Generate evidence package for auditors.
        local
            l_template: SIMPLE_TEMPLATE
            l_context: HASH_TABLE [ANY, STRING]
        do
            create l_template.make_from_file ("templates/evidence_package.html")
            create l_context.make (5)

            l_context.put (a_audit.id.out, "audit_id")
            l_context.put (evidence_table_html (a_audit), "evidence_table")
            l_context.put (hash_verification_html (a_audit), "verification_section")

            Result := l_template.render (l_context)
        end

end
```

**Data flow:** Audit data -> Template engine -> HTML/PDF report

### Audit Trail Implementation

**Purpose:** Immutable, hash-chained log of all compliance activities.

**Usage:**
```eiffel
class COMPLIANCE_AUDIT_TRAIL

feature -- Recording

    record (a_action: STRING; a_entity_type: STRING; a_entity_id: STRING;
            a_details: STRING)
            -- Record action in audit trail with hash chain.
        local
            l_entry: COMPLIANCE_TRAIL_ENTRY
            l_previous_hash: STRING
        do
            l_previous_hash := last_entry_hash

            create l_entry.make (a_action, a_entity_type, a_entity_id, a_details)
            l_entry.set_previous_hash (l_previous_hash)
            l_entry.compute_entry_hash

            db.execute ("INSERT INTO audit_trail "
                + "(timestamp, action, entity_type, entity_id, user, details, "
                + "previous_hash, entry_hash) VALUES (?, ?, ?, ?, ?, ?, ?, ?)",
                <<l_entry.timestamp.to_iso8601, a_action, a_entity_type,
                  a_entity_id, current_user, a_details, l_previous_hash,
                  l_entry.entry_hash>>)
        end

    verify_chain: BOOLEAN
            -- Verify entire audit trail chain integrity.
        local
            l_previous_hash: STRING
            l_computed_hash: STRING
        do
            Result := True
            l_previous_hash := ""

            db.query ("SELECT * FROM audit_trail ORDER BY id", Void)
            across db.results as row loop
                l_computed_hash := compute_entry_hash (row, l_previous_hash)
                if not l_computed_hash.same_string (row.string_item ("entry_hash")) then
                    Result := False
                end
                l_previous_hash := row.string_item ("entry_hash")
            end
        end

end
```

**Data flow:** Action -> Hash with previous entry -> Immutable chain

## Dependency Graph

```
compliance-reporter
    |
    +-- simple_scheduler (required)
    |       +-- simple_datetime
    |       +-- simple_mml
    |
    +-- simple_sql (required)
    |       +-- ISE base
    |
    +-- simple_json (required)
    |       +-- ISE base
    |
    +-- simple_hash (required)
    |       +-- ISE base
    |
    +-- simple_cli (required)
    |       +-- ISE base
    |
    +-- simple_logger (required)
    |       +-- simple_datetime
    |
    +-- simple_config (required)
    |       +-- simple_json
    |
    +-- simple_process (required)
    |       +-- ISE base
    |
    +-- simple_datetime (required)
    |       +-- ISE time
    |
    +-- simple_email (optional)
    |       +-- simple_smtp
    |
    +-- simple_template (optional)
    |       +-- simple_json
    |
    +-- simple_csv (optional)
    |       +-- ISE base
    |
    +-- simple_uuid (optional)
            +-- ISE base
```

## ECF Configuration

```xml
<?xml version="1.0" encoding="ISO-8859-1"?>
<system xmlns="http://www.eiffel.com/developers/xml/configuration-1-23-0"
        name="compliance"
        uuid="XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX">

    <target name="compliance_lib">
        <option warning="warning" syntax="standard">
            <assertions precondition="true" postcondition="true" invariant="true"/>
        </option>

        <!-- simple_* dependencies -->
        <library name="simple_scheduler" location="$SIMPLE_EIFFEL/simple_scheduler/simple_scheduler.ecf"/>
        <library name="simple_sql" location="$SIMPLE_EIFFEL/simple_sql/simple_sql.ecf"/>
        <library name="simple_json" location="$SIMPLE_EIFFEL/simple_json/simple_json.ecf"/>
        <library name="simple_hash" location="$SIMPLE_EIFFEL/simple_hash/simple_hash.ecf"/>
        <library name="simple_cli" location="$SIMPLE_EIFFEL/simple_cli/simple_cli.ecf"/>
        <library name="simple_logger" location="$SIMPLE_EIFFEL/simple_logger/simple_logger.ecf"/>
        <library name="simple_config" location="$SIMPLE_EIFFEL/simple_config/simple_config.ecf"/>
        <library name="simple_process" location="$SIMPLE_EIFFEL/simple_process/simple_process.ecf"/>
        <library name="simple_datetime" location="$SIMPLE_EIFFEL/simple_datetime/simple_datetime.ecf"/>

        <!-- Optional dependencies -->
        <library name="simple_email" location="$SIMPLE_EIFFEL/simple_email/simple_email.ecf"/>
        <library name="simple_template" location="$SIMPLE_EIFFEL/simple_template/simple_template.ecf"/>
        <library name="simple_csv" location="$SIMPLE_EIFFEL/simple_csv/simple_csv.ecf"/>
        <library name="simple_uuid" location="$SIMPLE_EIFFEL/simple_uuid/simple_uuid.ecf"/>

        <!-- ISE dependencies -->
        <library name="base" location="$ISE_LIBRARY/library/base/base.ecf"/>

        <!-- Application source -->
        <cluster name="src" location="./src/" recursive="true"/>
    </target>

    <target name="compliance" extends="compliance_lib">
        <root class="COMPLIANCE_CLI" feature="make"/>
    </target>

    <target name="compliance_tests" extends="compliance_lib">
        <root class="TEST_APP" feature="make"/>
        <library name="simple_testing" location="$SIMPLE_EIFFEL/simple_testing/simple_testing.ecf"/>
        <cluster name="tests" location="./tests/" recursive="true"/>
    </target>

</system>
```
