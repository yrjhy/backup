/**
 * Project Data Backup System - Class Model
 */


#include "BackupPolicy.h"

/**
 * BackupPolicy implementation
 * 
 * Backup behavior and retention settings.
 */


/**
 * @param path
 * @return bool
 */
bool BackupPolicy::accept(String path) {
    return false;
}

/**
 * @param version
 * @return bool
 */
bool BackupPolicy::shouldDelete(BackupVersion version) {
    return false;
}