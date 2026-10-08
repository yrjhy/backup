/**
 * Project Data Backup System - Class Model
 */


#ifndef _ZIPCOMPRESSOR_H
#define _ZIPCOMPRESSOR_H

#include "ICompressor.h"


class ZipCompressor: public ICompressor {
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
private: 
    int level;
};

#endif //_ZIPCOMPRESSOR_H