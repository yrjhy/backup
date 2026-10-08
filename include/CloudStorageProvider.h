/**
 * Project Data Backup System - Class Model
 */


#ifndef _CLOUDSTORAGEPROVIDER_H
#define _CLOUDSTORAGEPROVIDER_H

#include "IStorageProvider.h"


class CloudStorageProvider: public IStorageProvider {
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
private: 
    String endpoint;
    String bucket;
    String credentialRef;
};

#endif //_CLOUDSTORAGEPROVIDER_H