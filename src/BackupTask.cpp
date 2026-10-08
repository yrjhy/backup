/**
 * Project Data Backup System - Class Model
 */


#include "BackupTask.h"
#include "BackupMode.h"

/**
 * BackupTask implementation
 * 
 * A full or incremental backup execution.
 */


/**
 * @return BackupMode
 */
BackupMode BackupTask::resolveEffectiveMode() {
    return {};
}
