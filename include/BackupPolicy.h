/**
 * Project Data Backup System - Class Model
 */


#ifndef _BACKUPPOLICY_H
#define _BACKUPPOLICY_H
#include "BackupMode.h"
#include "BackupVersion.h"
class BackupPolicy {
public: 
    
/**
 * @param path
 */
bool accept(String path);
    
/**
 * @param version
 */
bool shouldDelete(BackupVersion version);
private: 
    BackupMode mode;
    List<String> includePatterns;
    List<String> excludePatterns;
    bool compressionEnabled;
    bool encryptionEnabled;
    int retentionCount;
    int maxRetries;
};

#endif //_BACKUPPOLICY_H
