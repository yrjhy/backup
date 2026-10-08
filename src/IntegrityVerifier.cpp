/**
 * Project Data Backup System - Class Model
 */


#include "IntegrityVerifier.h"

/**
 * IntegrityVerifier implementation
 * 
 * Performs checksum validation before a version becomes restorable.
 */


/**
 * @param path
 * @return String
 */
String IntegrityVerifier::checksum(String path) {
    return "";
}

/**
 * @param key
 * @param expected
 * @return bool
 */
bool IntegrityVerifier::verifyObject(String key, String expected) {
    return false;
}

/**
 * @param version
 * @return VerificationReport
 */
VerificationReport IntegrityVerifier::verifyVersion(BackupVersion version) {
    return {};
}