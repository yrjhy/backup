/**
 * Project Data Backup System - Class Model
 */


#ifndef _BACKUPPLAN_H
#define _BACKUPPLAN_H

class BackupPlan {
public: 
    
ValidationResult validate();
    
DateTime nextRunTime();
private: 
    String planId;
    String name;
    bool enabled;
    List<String> sourcePaths;
    String storageTargetId;
};

#endif //_BACKUPPLAN_H