
/**
 * Project Data Backup System - Class Model
 */


#ifndef _INTEGRITYVERIFIER_H
#define _INTEGRITYVERIFIER_H
#include "BackupVersion.h"

class IntegrityVerifier {
public: 
    
/**
 * @param path
 */
String checksum(String path);
    
/**
 * @param key
 * @param expected
 */
bool verifyObject(String key, String expected);
    
/**
 * @param version
 */
VerificationReport verifyVersion(BackupVersion version);
private: 
    String algorithm;
};

#endif //_INTEGRITYVERIFIER_H
