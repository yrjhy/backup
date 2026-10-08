/**
 * Project Data Backup System - Class Model
 */


#ifndef _AESGCMCIPHER_H
#define _AESGCMCIPHER_H

#include "ICipher.h"


class AesGcmCipher: public ICipher {
public: 
    
/**
 * @param source
 * @param target
 * @param keyRef
 */
void encrypt(String source, String target, String keyRef);
    
/**
 * @param source
 * @param target
 * @param keyRef
 */
void decrypt(String source, String target, String keyRef);
private: 
    int keySizeBits;
};

#endif //_AESGCMCIPHER_H