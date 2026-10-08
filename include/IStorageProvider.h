/**
 * Project Data Backup System - Class Model
 */


#ifndef _ISTORAGEPROVIDER_H
#define _ISTORAGEPROVIDER_H

class IStorageProvider {
public: 
    
bool testConnection();
    
long availableBytes();
    
/**
 * @param objectKey
 * @param source
 */
void put(String objectKey, String source);
    
/**
 * @param objectKey
 * @param target
 */
void get(String objectKey, String target);
    
/**
 * @param objectKey
 */
void remove(String objectKey);
};

#endif //_ISTORAGEPROVIDER_H