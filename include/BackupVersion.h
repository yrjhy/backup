/**
 * Project Data Backup System - Class Model
 */


#ifndef _BACKUPVERSION_H
#define _BACKUPVERSION_H
#include "BackupMode.h"
class BackupVersion {
public: 
    
bool isRestorable();
    
List<String> dependencyChain();
private: 
    String versionId;
    String planId;
    BackupMode backupMode;
    String baseVersionId;
    String manifestPath;
    String checksum;
    DateTime createdAt;
    long totalBytes;
};

#endif //_BACKUPVERSION_H
