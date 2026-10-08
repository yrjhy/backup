/**
 * Project Data Backup System - Class Model
 */


#ifndef _ICIPHER_H
#define _ICIPHER_H

class ICipher {
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
};

#endif //_ICIPHER_H