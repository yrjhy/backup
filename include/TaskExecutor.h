#include "BackupVersion.h"
#include "BackupTask.h"
#include "RestoreTask.h"
#include "BackupVersion.h"
/**
 * Project Data Backup System - Class Model
 */


#ifndef _TASKEXECUTOR_H
#define _TASKEXECUTOR_H

class TaskExecutor {
public: 
    
/**
 * @param task
 */
BackupVersion executeBackup(BackupTask task);
    
/**
 * @param task
 */
RestoreResult executeRestore(RestoreTask task);
    
/**
 * @param taskId
 */
bool pause(String taskId);
    
/**
 * @param taskId
 */
bool cancel(String taskId);
private: 
    int workerCount;
    long chunkSizeBytes;
};

#endif //_TASKEXECUTOR_H