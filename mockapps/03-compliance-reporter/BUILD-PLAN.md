# Compliance Reporter - Build Plan

## Phase Overview

| Phase | Deliverable | Effort | Dependencies |
|-------|-------------|--------|--------------|
| Phase 1 | MVP Check Runner | 4-5 days | simple_scheduler, simple_json, simple_process, simple_hash |
| Phase 2 | Evidence & Findings | 3-4 days | Phase 1, simple_sql |
| Phase 3 | Audit Cycles & Reports | 3-4 days | Phase 2, simple_template |
| Phase 4 | Polish | 2-3 days | Phase 3, all features complete |

**Total Estimated Effort:** 12-16 days

---

## Phase 1: MVP Check Runner

### Objective

Demonstrate core compliance checking with framework definitions, check execution, and evidence collection with hash verification.

### Deliverables

1. **COMPLIANCE_CLI** - Command-line interface with basic commands
2. **COMPLIANCE_FRAMEWORK** - Framework definition model
3. **COMPLIANCE_CONTROL** - Control definition model
4. **COMPLIANCE_CHECK** - Check definition model
5. **COMPLIANCE_EVIDENCE** - Evidence with hash verification
6. **COMPLIANCE_CHECK_EXECUTOR** - Command execution
7. **COMPLIANCE_FRAMEWORK_LOADER** - JSON loader
8. **Basic CLI** - init, framework, check, run commands

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T1.1 | Create project structure | ECF compiles, directories exist |
| T1.2 | Define framework JSON schema | Schema documented, SOC 2 example |
| T1.3 | Implement COMPLIANCE_FRAMEWORK | Parse framework from JSON |
| T1.4 | Implement COMPLIANCE_CONTROL | Controls with checks |
| T1.5 | Implement COMPLIANCE_CHECK | Check with command, expected result |
| T1.6 | Implement COMPLIANCE_EVIDENCE | Evidence with SHA-256 hash |
| T1.7 | Implement COMPLIANCE_CHECK_EXECUTOR | Execute check command |
| T1.8 | Implement COMPLIANCE_FRAMEWORK_LOADER | Load framework JSON |
| T1.9 | Implement COMPLIANCE_CLI scaffold | Argument parsing |
| T1.10 | Implement `init` command | Create project structure |
| T1.11 | Implement `framework list` command | List available frameworks |
| T1.12 | Implement `framework add` command | Add framework to project |
| T1.13 | Implement `check list` command | List checks for framework |
| T1.14 | Implement `run` command | Execute checks, collect evidence |
| T1.15 | Create sample SOC 2 framework | Basic controls and checks |
| T1.16 | Write MVP tests | Core functionality tested |

### Test Cases

| Test | Input | Expected Output |
|------|-------|-----------------|
| Parse framework JSON | Valid framework file | COMPLIANCE_FRAMEWORK object |
| Execute passing check | Check with expected output | Status: passed, evidence collected |
| Execute failing check | Check with unexpected output | Status: failed, finding detected |
| Evidence hash | Collect evidence | SHA-256 hash computed |
| Evidence verification | Modify evidence, verify | Integrity violation detected |
| Check timeout | Long-running check | Timeout error |

### Contracts

```eiffel
class COMPLIANCE_EVIDENCE
feature
    make (a_content: STRING; a_source: STRING)
        require
            content_not_empty: not a_content.is_empty
            source_not_empty: not a_source.is_empty
        ensure
            hash_computed: not content_hash.is_empty
            hash_length: content_hash.count = 64

    verify_integrity: BOOLEAN
        ensure
            consistent: Result = (compute_hash.same_string (content_hash))
```

---

## Phase 2: Evidence & Findings

### Objective

Add SQLite persistence for evidence, findings, and check history. Enable finding management and evidence export.

### Deliverables

1. **COMPLIANCE_EVIDENCE_STORE** - Evidence persistence
2. **COMPLIANCE_FINDING** - Finding/gap model
3. **COMPLIANCE_FINDING_STORE** - Finding persistence
4. **COMPLIANCE_CHECK_STORE** - Check history
5. **Database schema** - Tables for evidence, findings, checks
6. **evidence** commands - list, verify, export
7. **finding** commands - list, add, update

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T2.1 | Design database schema | Tables for evidence, findings, checks |
| T2.2 | Implement COMPLIANCE_EVIDENCE_STORE | CRUD for evidence |
| T2.3 | Implement COMPLIANCE_FINDING | Finding model with severity, status |
| T2.4 | Implement COMPLIANCE_FINDING_STORE | CRUD for findings |
| T2.5 | Implement COMPLIANCE_CHECK_STORE | Check run history |
| T2.6 | Implement `evidence list` command | List collected evidence |
| T2.7 | Implement `evidence verify` command | Verify all evidence integrity |
| T2.8 | Implement `evidence export` command | Export evidence package |
| T2.9 | Implement `finding list` command | List findings with filters |
| T2.10 | Implement `finding add` command | Add manual finding |
| T2.11 | Implement `finding update` command | Update finding status |
| T2.12 | Auto-create findings on check failure | Finding created when check fails |
| T2.13 | Write persistence tests | DB operations tested |

### Test Cases

| Test | Input | Expected Output |
|------|-------|-----------------|
| Evidence persists | Run check, collect evidence | Evidence in database |
| Evidence integrity | Verify all evidence | All pass or violations flagged |
| Finding creation | Failed check | Finding created automatically |
| Finding workflow | Update finding status | Status changed, audit trail |
| Evidence export | `evidence export` | JSON package with hashes |

### Finding Workflow

```
[open] -> [in_progress] -> [remediated] -> [verified]
   |            |              ^
   |            v              |
   +-> [accepted]   [false_positive]
```

---

## Phase 3: Audit Cycles & Reports

### Objective

Add audit cycle management, report generation, and audit trail maintenance.

### Deliverables

1. **COMPLIANCE_AUDIT** - Audit cycle model
2. **COMPLIANCE_AUDIT_STORE** - Audit persistence
3. **COMPLIANCE_AUDIT_TRAIL** - Immutable activity log
4. **COMPLIANCE_REPORT_GENERATOR** - Report templates
5. **audit** commands - start, status, close, history
6. **report** commands - summary, evidence, findings, audit-package
7. **schedule** command - Automated check scheduling
8. **daemon** command - Background scheduler

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T3.1 | Implement COMPLIANCE_AUDIT | Audit cycle model |
| T3.2 | Implement COMPLIANCE_AUDIT_STORE | CRUD for audits |
| T3.3 | Implement COMPLIANCE_AUDIT_TRAIL | Hash-chained audit log |
| T3.4 | Design report templates | HTML templates for reports |
| T3.5 | Implement COMPLIANCE_REPORT_GENERATOR | Template rendering |
| T3.6 | Implement `audit start` command | Start new audit cycle |
| T3.7 | Implement `audit status` command | Show current audit status |
| T3.8 | Implement `audit close` command | Close audit cycle |
| T3.9 | Implement `audit history` command | View past audits |
| T3.10 | Implement `report summary` command | Generate summary report |
| T3.11 | Implement `report evidence` command | Generate evidence package |
| T3.12 | Implement `report findings` command | Generate findings report |
| T3.13 | Implement `report audit-package` command | Full audit package |
| T3.14 | Implement `schedule` command | Schedule automated checks |
| T3.15 | Implement `daemon` command | Start background scheduler |
| T3.16 | Implement `trail` command | View audit trail |
| T3.17 | Write audit and report tests | All report formats tested |

### Test Cases

| Test | Input | Expected Output |
|------|-------|-----------------|
| Start audit | `audit start soc2` | Audit cycle created |
| Run checks in audit | `run --framework soc2` | Checks linked to audit |
| Close audit | `audit close` | Summary computed |
| Summary report | `report summary` | HTML report generated |
| Evidence package | `report evidence` | JSON package with all evidence |
| Audit trail | View trail | All actions logged with hashes |
| Trail integrity | Verify trail | Chain validates |

### Report Templates

```
templates/
├── summary_report.html
├── evidence_package.html
├── findings_report.html
├── audit_package.html
└── partials/
    ├── header.html
    ├── footer.html
    ├── finding_row.html
    └── evidence_row.html
```

---

## Phase 4: Production Polish

### Objective

Harden for production with comprehensive error handling, documentation, and additional frameworks.

### Deliverables

1. Error handling hardening
2. Help documentation
3. Additional framework definitions (HIPAA, ISO 27001)
4. Performance optimization
5. README and usage documentation

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T4.1 | Comprehensive error handling | All edge cases handled |
| T4.2 | Help text for all commands | --help shows detailed usage |
| T4.3 | Create HIPAA framework definition | Basic HIPAA controls |
| T4.4 | Create ISO 27001 framework definition | Basic ISO controls |
| T4.5 | Performance profiling | Handle 500+ checks efficiently |
| T4.6 | Documentation | README, framework schema docs |
| T4.7 | Sample check scripts | Example check scripts |
| T4.8 | Integration tests | End-to-end workflow tests |
| T4.9 | Release packaging | Binary builds |

### Test Cases

| Test | Input | Expected Output |
|------|-------|-----------------|
| Invalid framework | Malformed JSON | Clear validation errors |
| 500 checks | Run all checks | Completes efficiently |
| Framework switching | Run SOC2, then HIPAA | Both work correctly |
| Report formats | All report types | All generate correctly |

---

## Sample Framework Definitions

### SOC 2 (Partial)

```json
{
  "framework": {
    "id": "soc2",
    "name": "SOC 2 Type II",
    "version": "2017"
  },
  "categories": [
    {
      "id": "CC",
      "name": "Common Criteria",
      "controls": [
        {
          "id": "CC6.1",
          "name": "Logical Access Security",
          "checks": [
            {"id": "CC6.1-001", "name": "Password Policy", "command": "./checks/soc2/password_policy.sh"},
            {"id": "CC6.1-002", "name": "MFA Enabled", "command": "./checks/soc2/mfa_check.sh"}
          ]
        }
      ]
    }
  ]
}
```

### Sample Check Script

```bash
#!/bin/bash
# checks/soc2/password_policy.sh
# Checks Windows password policy for SOC 2 CC6.1 compliance

MIN_LENGTH=$(net accounts | grep "Minimum password length" | awk '{print $4}')

if [ "$MIN_LENGTH" -ge 12 ]; then
    echo "COMPLIANT"
    echo "Minimum password length: $MIN_LENGTH characters"
    exit 0
else
    echo "NON-COMPLIANT"
    echo "Minimum password length ($MIN_LENGTH) is less than required (12)"
    exit 1
fi
```

---

## ECF Target Structure

```xml
<!-- Library target -->
<target name="compliance_lib">
    <option warning="warning" syntax="standard">
        <assertions precondition="true" postcondition="true" invariant="true"/>
    </option>
    <library name="simple_scheduler" location="$SIMPLE_EIFFEL/simple_scheduler/simple_scheduler.ecf"/>
    <library name="simple_sql" location="$SIMPLE_EIFFEL/simple_sql/simple_sql.ecf"/>
    <library name="simple_json" location="$SIMPLE_EIFFEL/simple_json/simple_json.ecf"/>
    <library name="simple_hash" location="$SIMPLE_EIFFEL/simple_hash/simple_hash.ecf"/>
    <library name="simple_cli" location="$SIMPLE_EIFFEL/simple_cli/simple_cli.ecf"/>
    <library name="simple_logger" location="$SIMPLE_EIFFEL/simple_logger/simple_logger.ecf"/>
    <library name="simple_config" location="$SIMPLE_EIFFEL/simple_config/simple_config.ecf"/>
    <library name="simple_process" location="$SIMPLE_EIFFEL/simple_process/simple_process.ecf"/>
    <library name="simple_datetime" location="$SIMPLE_EIFFEL/simple_datetime/simple_datetime.ecf"/>
    <library name="simple_email" location="$SIMPLE_EIFFEL/simple_email/simple_email.ecf"/>
    <library name="simple_template" location="$SIMPLE_EIFFEL/simple_template/simple_template.ecf"/>
    <library name="simple_csv" location="$SIMPLE_EIFFEL/simple_csv/simple_csv.ecf"/>
    <library name="simple_uuid" location="$SIMPLE_EIFFEL/simple_uuid/simple_uuid.ecf"/>
    <library name="base" location="$ISE_LIBRARY/library/base/base.ecf"/>
    <cluster name="src" location="./src/" recursive="true"/>
</target>

<!-- CLI target -->
<target name="compliance" extends="compliance_lib">
    <root class="COMPLIANCE_CLI" feature="make"/>
</target>

<!-- Test target -->
<target name="compliance_tests" extends="compliance_lib">
    <root class="TEST_APP" feature="make"/>
    <library name="simple_testing" location="$SIMPLE_EIFFEL/simple_testing/simple_testing.ecf"/>
    <cluster name="tests" location="./tests/" recursive="true"/>
</target>
```

---

## Build Commands

```bash
# Compile CLI
/d/prod/ec.sh -batch -config compliance.ecf -target compliance -c_compile

# Compile finalized
/d/prod/ec.sh -batch -config compliance.ecf -target compliance -finalize -c_compile

# Run tests
/d/prod/ec.sh -batch -config compliance.ecf -target compliance_tests -c_compile
./EIFGENs/compliance_tests/W_code/compliance.exe
```

---

## Success Criteria

| Criterion | Measure | Target |
|-----------|---------|--------|
| Compiles | Zero errors | 100% |
| Tests pass | All tests | 100% |
| CLI works | All commands functional | Yes |
| Documentation | README, schema docs complete | Yes |
| Evidence integrity | Hash verification works | 100% |
| Audit trail | Chain validates | 100% |
| Report generation | All formats work | Yes |
| Framework support | SOC 2 complete | Yes |

---

## Risk Mitigation

| Risk | Mitigation |
|------|------------|
| simple_hash incomplete | Use ISE SECURE_RANDOM + custom SHA-256 |
| simple_template missing | Use string concatenation for reports |
| Check script portability | Document platform requirements |
| Large evidence files | Stream hashing, chunked storage |
