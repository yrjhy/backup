#include "BackupPlan.h"
/**
 * Project Data Backup System - Class Model
 */


#ifndef _SCHEDULERSERVICE_H
#define _SCHEDULERSERVICE_H

class SchedulerService {
public: 
    
/**
 * @param plan
 */
void registerPlan(BackupPlan plan);
    
/**
 * @param planId
 */
void unregister(String planId);
    
/**
 * @param now
 */
void dispatchDuePlans(DateTime now);
private: 
    bool running;
};

#endif //_SCHEDULERSERVICE_H
