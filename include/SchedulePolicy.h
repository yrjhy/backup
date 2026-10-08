/**
 * Project Data Backup System - Class Model
 */


#ifndef _SCHEDULEPOLICY_H
#define _SCHEDULEPOLICY_H

class SchedulePolicy {
public: 
    
/**
 * @param after
 */
DateTime calculateNext(DateTime after);
private: 
    ScheduleType scheduleType;
    String cronExpression;
    bool runOnStartup;
    MissedRunPolicy missedRunPolicy;
};

#endif //_SCHEDULEPOLICY_H