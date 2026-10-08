/**
 * Project Data Backup System - Class Model
 */


#include "BackupVersion.h"

/**
 * BackupVersion implementation
 * 
 * Immutable metadata for one successful backup.
 */


/**
 * @return bool
 */
bool BackupVersion::isRestorable() {
    return false;
}

/**
 * @return List<String>
 */
List<String> BackupVersion::dependencyChain() {
    return {};
}