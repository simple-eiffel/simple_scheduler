# Compliance Reporter - Technical Design

## Architecture

### Component Overview

```
+----------------------------------------------------------+
|                   Compliance Reporter                     |
+----------------------------------------------------------+
|  CLI Interface Layer (COMPLIANCE_CLI)                     |
|    - Argument parsing (simple_cli)                        |
|    - Audit commands                                       |
|    - Report generation                                    |
+----------------------------------------------------------+
|  Business Logic Layer                                     |
|    - COMPLIANCE_ENGINE: Audit orchestration               |
|    - COMPLIANCE_CHECK: Individual check definition        |
|    - COMPLIANCE_EVIDENCE: Evidence with hash verification |
|    - COMPLIANCE_FINDING: Issue tracking                   |
|    - COMPLIANCE_REPORT_GENERATOR: Report creation         |
+----------------------------------------------------------+
|  Integration Layer                                        |
|    - simple_scheduler: Check scheduling                   |
|    - simple_sql: Audit database                           |
|    - simple_json: Check definitions, evidence export      |
|    - simple_hash: Evidence integrity verification         |
|    - simple_template: Report generation                   |
|    - simple_email: Alert notifications                    |
+----------------------------------------------------------+
|  Data Layer                                               |
|    - compliance.db: Checks, evidence, findings, audits    |
|    - checks/*.json: Check definitions by framework        |
|    - evidence/: Collected evidence files                  |
|    - reports/: Generated audit reports                    |
+----------------------------------------------------------+
```

### Class Design

| Class | Responsibility | Key Features |
|-------|----------------|--------------|
| COMPLIANCE_CLI | Command-line interface | parse_args, execute_command |
| COMPLIANCE_ENGINE | Audit orchestration | run_audit, collect_evidence, generate_report |
| COMPLIANCE_FRAMEWORK | Framework definition (SOC2, HIPAA) | controls, checks, requirements |
| COMPLIANCE_CONTROL | Individual control requirement | id, description, checks |
| COMPLIANCE_CHECK | Automated check | command, expected_result, severity |
| COMPLIANCE_EVIDENCE | Evidence artifact | content, hash, timestamp, source |
| COMPLIANCE_FINDING | Issue/gap tracking | severity, status, remediation |
| COMPLIANCE_AUDIT | Audit run record | framework, date, status, findings |
| COMPLIANCE_REPORT_GENERATOR | Report creation | html, json, csv, pdf output |
| COMPLIANCE_AUDIT_TRAIL | Immutable activity log | actions, timestamps, hashes |

### Command Structure

```bash
compliance <command> [options] [arguments]

Commands:
  init           Initialize compliance project
  framework      Manage compliance frameworks
  check          Manage compliance checks
  run            Run compliance checks
  evidence       Manage evidence collection
  finding        Manage findings/gaps
  audit          Manage audit cycles
  report         Generate audit reports
  schedule       Schedule automated checks
  trail          View audit trail
  daemon         Start compliance daemon

Framework Commands:
  compliance framework list                 List available frameworks
  compliance framework add soc2             Add framework to project
  compliance framework status soc2          Show compliance status

Check Commands:
  compliance check list                     List all checks
  compliance check run <check-id>           Run specific check
  compliance check validate                 Validate check definitions

Run Commands:
  compliance run --framework soc2           Run all checks for framework
  compliance run --control CC6.1            Run checks for specific control
  compliance run --critical                 Run critical checks only

Evidence Commands:
  compliance evidence collect <check-id>    Collect evidence for check
  compliance evidence list                  List all evidence
  compliance evidence verify                Verify evidence integrity
  compliance evidence export                Export evidence package

Finding Commands:
  compliance finding list                   List all findings
  compliance finding add                    Add manual finding
  compliance finding update <id> --status   Update finding status
  compliance finding assign <id> --to       Assign finding to owner

Audit Commands:
  compliance audit start soc2               Start new audit cycle
  compliance audit status                   Show current audit status
  compliance audit close                    Close audit cycle
  compliance audit history                  View past audits

Report Commands:
  compliance report summary                 Summary report
  compliance report evidence                Evidence package
  compliance report findings                Findings report
  compliance report audit-package           Full audit package

Global Options:
  --config FILE      Configuration file
  --db FILE          Database file
  --output FORMAT    Output format (text|json|csv|html)
  --verbose          Verbose output
  --help             Show help
```

### Compliance Framework Definition

```json
{
  "framework": {
    "id": "soc2",
    "name": "SOC 2 Type II",
    "version": "2017",
    "description": "Service Organization Control 2"
  },
  "categories": [
    {
      "id": "CC",
      "name": "Common Criteria",
      "controls": [
        {
          "id": "CC6.1",
          "name": "Logical Access Security",
          "description": "The entity implements logical access security software...",
          "checks": [
            {
              "id": "CC6.1-001",
              "name": "Password Policy Check",
              "description": "Verify password complexity requirements",
              "command": "./checks/password_policy.sh",
              "expected": "COMPLIANT",
              "severity": "high",
              "evidence_type": "automated",
              "schedule": "0 6 * * *"
            },
            {
              "id": "CC6.1-002",
              "name": "MFA Enabled Check",
              "description": "Verify MFA is enabled for all users",
              "command": "./checks/mfa_enabled.sh",
              "expected": "COMPLIANT",
              "severity": "critical",
              "evidence_type": "automated",
              "schedule": "0 6 * * *"
            }
          ]
        }
      ]
    }
  ]
}
```

### Check Definition Format

```json
{
  "check": {
    "id": "CC6.1-001",
    "name": "Password Policy Check",
    "description": "Verify password complexity requirements meet SOC 2 standards",
    "framework": "soc2",
    "control": "CC6.1",
    "command": "./checks/password_policy.sh",
    "timeout": 60,
    "expected_output": "COMPLIANT",
    "evidence_collection": {
      "type": "command_output",
      "include_stdout": true,
      "include_stderr": false,
      "additional_files": ["./evidence/password_policy.txt"]
    },
    "severity": "high",
    "remediation": "Update password policy to require minimum 12 characters...",
    "references": [
      "SOC 2 CC6.1",
      "NIST 800-53 IA-5"
    ],
    "schedule": {
      "cron": "0 6 * * *",
      "enabled": true
    }
  }
}
```

### Data Flow

```
┌─────────────────┐     ┌────────────────┐     ┌─────────────────┐
│  Check          │────>│  COMPLIANCE    │────>│  Command        │
│  Definition     │     │  ENGINE        │     │  Execution      │
└─────────────────┘     └────────────────┘     └─────────────────┘
                                │                       │
                                v                       v
                        ┌───────────────┐       ┌───────────────┐
                        │  Schedule     │       │  Evidence     │
                        │  (cron)       │       │  Collection   │
                        └───────────────┘       └───────────────┘
                                                        │
                                ┌───────────────────────┘
                                v
                        ┌───────────────┐
                        │  Hash         │
                        │  Verification │
                        └───────────────┘
                                │
                                v
                        ┌───────────────┐       ┌───────────────┐
                        │  Finding      │       │  Audit        │
                        │  Detection    │──────>│  Trail        │
                        └───────────────┘       └───────────────┘
                                │
                                v
                        ┌───────────────┐
                        │  Report       │
                        │  Generation   │
                        └───────────────┘
```

### Database Schema

```sql
-- Frameworks table
CREATE TABLE frameworks (
    id TEXT PRIMARY KEY,
    name TEXT NOT NULL,
    version TEXT,
    description TEXT,
    enabled INTEGER DEFAULT 1,
    created_at TEXT NOT NULL
);

-- Controls table
CREATE TABLE controls (
    id TEXT PRIMARY KEY,
    framework_id TEXT NOT NULL,
    category TEXT,
    name TEXT NOT NULL,
    description TEXT,
    FOREIGN KEY (framework_id) REFERENCES frameworks(id)
);

-- Checks table
CREATE TABLE checks (
    id TEXT PRIMARY KEY,
    control_id TEXT NOT NULL,
    name TEXT NOT NULL,
    description TEXT,
    command TEXT NOT NULL,
    expected_output TEXT,
    severity TEXT NOT NULL,
    timeout_seconds INTEGER DEFAULT 60,
    schedule TEXT,
    is_enabled INTEGER DEFAULT 1,
    FOREIGN KEY (control_id) REFERENCES controls(id)
);

-- Check runs table
CREATE TABLE check_runs (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    check_id TEXT NOT NULL,
    audit_id INTEGER,
    started_at TEXT NOT NULL,
    completed_at TEXT,
    status TEXT NOT NULL,  -- 'running', 'passed', 'failed', 'error'
    output TEXT,
    exit_code INTEGER,
    FOREIGN KEY (check_id) REFERENCES checks(id),
    FOREIGN KEY (audit_id) REFERENCES audits(id)
);

-- Evidence table
CREATE TABLE evidence (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    check_run_id INTEGER,
    control_id TEXT,
    type TEXT NOT NULL,  -- 'automated', 'manual', 'document'
    content TEXT,
    file_path TEXT,
    content_hash TEXT NOT NULL,
    collected_at TEXT NOT NULL,
    verified INTEGER DEFAULT 0,
    FOREIGN KEY (check_run_id) REFERENCES check_runs(id),
    FOREIGN KEY (control_id) REFERENCES controls(id)
);

-- Findings table
CREATE TABLE findings (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    check_run_id INTEGER,
    control_id TEXT NOT NULL,
    severity TEXT NOT NULL,  -- 'critical', 'high', 'medium', 'low', 'info'
    status TEXT NOT NULL,    -- 'open', 'in_progress', 'remediated', 'accepted', 'false_positive'
    title TEXT NOT NULL,
    description TEXT,
    remediation TEXT,
    assigned_to TEXT,
    due_date TEXT,
    created_at TEXT NOT NULL,
    updated_at TEXT NOT NULL,
    FOREIGN KEY (check_run_id) REFERENCES check_runs(id),
    FOREIGN KEY (control_id) REFERENCES controls(id)
);

-- Audits table
CREATE TABLE audits (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    framework_id TEXT NOT NULL,
    name TEXT NOT NULL,
    started_at TEXT NOT NULL,
    completed_at TEXT,
    status TEXT NOT NULL,  -- 'in_progress', 'completed', 'cancelled'
    total_checks INTEGER,
    passed_checks INTEGER,
    failed_checks INTEGER,
    FOREIGN KEY (framework_id) REFERENCES frameworks(id)
);

-- Audit trail table (immutable)
CREATE TABLE audit_trail (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    timestamp TEXT NOT NULL,
    action TEXT NOT NULL,
    entity_type TEXT NOT NULL,
    entity_id TEXT NOT NULL,
    user TEXT,
    details TEXT,
    previous_hash TEXT,
    entry_hash TEXT NOT NULL
);

-- Indexes
CREATE INDEX idx_check_runs_check ON check_runs(check_id);
CREATE INDEX idx_check_runs_audit ON check_runs(audit_id);
CREATE INDEX idx_evidence_check_run ON evidence(check_run_id);
CREATE INDEX idx_findings_status ON findings(status);
CREATE INDEX idx_findings_severity ON findings(severity);
CREATE INDEX idx_audit_trail_timestamp ON audit_trail(timestamp);
```

### Evidence Integrity Verification

```eiffel
class COMPLIANCE_EVIDENCE

feature -- Hashing

    compute_hash: STRING
            -- Compute SHA-256 hash of evidence content.
        local
            l_hasher: SIMPLE_HASH
        do
            create l_hasher.make_sha256
            if attached content as c then
                l_hasher.update_string (c)
            end
            if attached file_path as fp then
                l_hasher.update_string (fp)
            end
            l_hasher.update_string (collected_at.out)
            Result := l_hasher.hexdigest
        end

    verify_integrity: BOOLEAN
            -- Verify evidence has not been tampered with.
        do
            Result := compute_hash.same_string (stored_hash)
        end

feature -- Attributes

    content: detachable STRING
    file_path: detachable STRING
    collected_at: SIMPLE_DATE_TIME
    stored_hash: STRING

end
```

### Error Handling

| Error Type | Handling | User Message |
|------------|----------|--------------|
| Check command failure | Record as error, create finding | "Check execution error: {message}" |
| Evidence hash mismatch | Flag as tampered, alert | "Evidence integrity violation detected" |
| Missing framework | Reject operation | "Framework not found: {id}" |
| Database error | Log and retry | "Database error: {message}" |
| Timeout exceeded | Record timeout, create finding | "Check timed out after {seconds}s" |

### Exit Codes

| Code | Meaning |
|------|---------|
| 0 | Success (all checks passed) |
| 1 | General error |
| 2 | Invalid arguments |
| 3 | Some checks failed |
| 4 | Critical findings detected |
| 5 | Database error |
| 6 | Evidence integrity violation |

## GUI/TUI Future Path

**CLI foundation enables:**
- Framework and check definitions in JSON
- Evidence and findings in database
- Report templates for multiple output formats
- Audit trail for compliance dashboard

**What would change for TUI:**
- Add simple_tui for interactive compliance dashboard
- Real-time check status display
- Finding management interface
- Evidence browser

**Shared components between CLI/GUI:**
- COMPLIANCE_ENGINE (all business logic)
- Framework definitions and checks
- Database schema and queries
- Report generation templates
