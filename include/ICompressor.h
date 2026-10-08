/**
 * Project Data Backup System - Class Model
 */


#ifndef _ICOMPRESSOR_H
#define _ICOMPRESSOR_H

class ICompressor {
public: 
    
/**
 * @param source
 * @param target
 */
void compress(String source, String target);
    
/**
 * @param source
 * @param target
 */
void decompress(String source, String target);
};

#endif //_ICOMPRESSOR_H