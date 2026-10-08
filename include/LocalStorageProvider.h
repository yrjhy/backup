/**
 * Project Data Backup System - Class Model
 */


#ifndef _LOCALSTORAGEPROVIDER_H
#define _LOCALSTORAGEPROVIDER_H

#include "IStorageProvider.h"


class LocalStorageProvider: public IStorageProvider {
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
    String rootPath;
};

#endif //_LOCALSTORAGEPROVIDER_H