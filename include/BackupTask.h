/**
 * Project Data Backup System - Class Model
 */


#ifndef _BACKUPTASK_H
#define _BACKUPTASK_H
#include "Task.h"
#include "BackupMode.h"


class BackupTask: public Task {
public: 
    
BackupMode resolveEffectiveMode();
private: 
    String planId;
    BackupMode requestedMode;
    String baseVersionId;
};

#endif //_BACKUPTASK_H
