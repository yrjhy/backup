#include "BackupPlan.h"
#include "Task.h"
#include "BackupVersion.h"
#include "BackupVersion.h"
/**
 * Project Data Backup System - Class Model
 */


#ifndef _METADATAREPOSITORY_H
#define _METADATAREPOSITORY_H

class MetadataRepository {
public: 
    
/**
 * @param plan
 */
void savePlan(BackupPlan plan);
    
/**
 * @param task
 */
void saveTask(Task task);
    
/**
 * @param version
 */
void saveVersion(BackupVersion version);
    
/**
 * @param planId
 */
BackupVersion findLatestVersion(String planId);
    
/**
 * @param planId
 */
List<BackupVersion> listVersions(String planId);
private: 
    String databasePath;
};

#endif //_METADATAREPOSITORY_H