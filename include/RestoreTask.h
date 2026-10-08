#include "BackupVersion.h"
/**
 * Project Data Backup System - Class Model
 */


#ifndef _RESTORETASK_H
#define _RESTORETASK_H

#include "Task.h"


class RestoreTask: public Task {
public: 
    
ValidationResult validateTarget();
private: 
    String versionId;
    List<String> selectedPaths;
    String targetPath;
    OverwritePolicy overwritePolicy;
};

#endif //_RESTORETASK_H