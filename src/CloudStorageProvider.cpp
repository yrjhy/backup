/**
 * Project Data Backup System - Class Model
 */


#include "CloudStorageProvider.h"

/**
 * CloudStorageProvider implementation
 * 
 * Remote object storage adapter.
 */


/**
 * @return bool
 */
bool CloudStorageProvider::testConnection() {
    return false;
}

/**
 * @return long
 */
long CloudStorageProvider::availableBytes() {
    return 0;
}

/**
 * @param objectKey
 * @param source
 * @return void
 */
void CloudStorageProvider::put(String objectKey, String source) {
    return;
}

/**
 * @param objectKey
 * @param target
 * @return void
 */
void CloudStorageProvider::get(String objectKey, String target) {
    return;
}

/**
 * @param objectKey
 * @return void
 */
void CloudStorageProvider::remove(String objectKey) {
    return;
}