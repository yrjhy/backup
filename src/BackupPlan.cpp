/**
 * Project Data Backup System - Class Model
 */


#include "BackupPlan.h"

/**
 * BackupPlan implementation
 * 
 * Reusable definition of what, where, and when to back up.
 */


/**
 * @return ValidationResult
 */
ValidationResult BackupPlan::validate() {
    return {};
}

/**
 * @return DateTime
 */
DateTime BackupPlan::nextRunTime() {
    return {};
}
