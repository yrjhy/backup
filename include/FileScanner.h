/**
 * Project Data Backup System - Class Model
 */


#ifndef _FILESCANNER_H
#define _FILESCANNER_H
#include "FileEntry.h"
#include "BackupPlan.h"
#include "BackupVersion.h"

class FileScanner {
public: 
    
/**
 * @param plan
 */
List<FileEntry> scan(BackupPlan plan);
    
/**
 * @param current
 * @param previous
 */
List<FileEntry> detectChanges(List<FileEntry> current, BackupVersion previous);
private: 
    bool followSymbolicLinks;
};

#endif //_FILESCANNER_H
