#include "TaskStatus.h"
/**
 * Project Data Backup System - Class Model
 */


#ifndef _TASK_H
#define _TASK_H
#include "TaskStatus.h"

class Task {
public: 
    
void start();
    
/**
 * @param message
 */
void markFailed(String message);
    
void markCompleted();
private: 
    String taskId;
    TaskStatus status;
    double progress;
    DateTime createdAt;
    DateTime startedAt;
    DateTime finishedAt;
    String errorMessage;
};

#endif //_TASK_H
