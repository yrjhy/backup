/**
 * Project Data Backup System - Class Model
 */


#include "LocalStorageProvider.h"

/**
 * LocalStorageProvider implementation
 * 
 * Local disk or mounted volume adapter.
 */


/**
 * @return bool
 */
bool LocalStorageProvider::testConnection() {
    return false;
}

/**
 * @return long
 */
long LocalStorageProvider::availableBytes() {
    return 0;
}

/**
 * @param objectKey
 * @param source
 * @return void
 */
void LocalStorageProvider::put(String objectKey, String source) {
    return;
}

/**
 * @param objectKey
 * @param target
 * @return void
 */
void LocalStorageProvider::get(String objectKey, String target) {
    return;
}

/**
 * @param objectKey
 * @return void
 */
void LocalStorageProvider::remove(String objectKey) {
    return;
}