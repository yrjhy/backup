/**
 * Project Data Backup System - Class Model
 */


#ifndef _FILEENTRY_H
#define _FILEENTRY_H

class FileEntry {
public: 
    
/**
 * @param other
 */
bool matches(FileEntry other);
private: 
    String relativePath;
    long sizeBytes;
    DateTime modifiedAt;
    String checksum;
    String storageObjectKey;
    FileState state;
};

#endif //_FILEENTRY_H