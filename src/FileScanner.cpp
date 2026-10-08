/**
 * Project Data Backup System - Class Model
 */


#include "FileScanner.h"

/**
 * FileScanner implementation
 * 
 * Scans sources and computes the incremental change set.
 */


/**
 * @param plan
 * @return List<FileEntry>
 */
List<FileEntry> FileScanner::scan(BackupPlan plan) {
    return {};
}

/**
 * @param current
 * @param previous
 * @return List<FileEntry>
 */
List<FileEntry> FileScanner::detectChanges(List<FileEntry> current, BackupVersion previous) {
    return {};
}