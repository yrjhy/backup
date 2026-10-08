/**
 * Project Data Backup System - Class Model
 */


#ifndef _BACKUPCONTROLLER_H
#define _BACKUPCONTROLLER_H
#include "BackupPlan.h"
#include <string>
class BackupController {
public: 
    
/**
 * @param name
 */
BackupPlan createPlan(String name);
    
/**
 * @param planId
 */
String startBackup(String planId);
    
/**
 * @param versionId
 * @param targetPath
 */
String startRestore(String versionId, String targetPath);
    
/**
 * @param taskId
 */
bool cancelTask(String taskId);
private: 
    String activePlanId;
};

#endif //_BACKUPCONTROLLER_H
