/**
 * Project Data Backup System - Class Model
 */

#include "BackupPlan.h"
#include "BackupController.h"
/**
 * BackupController implementation
 * 
 * Coordinates UI requests and application services.
 */


/**
 * @param name
 * @return BackupPlan
 */
BackupPlan BackupController::createPlan(String name) {
    return BackupPlan();
}

/**
 * @param planId
 * @return String
 */
String BackupController::startBackup(String planId) {
    return "";
}

/**
 * @param versionId
 * @param targetPath
 * @return String
 */
String BackupController::startRestore(String versionId, String targetPath) {
    return "";
}

/**
 * @param taskId
 * @return bool
 */
bool BackupController::cancelTask(String taskId) {
    return false;
}
