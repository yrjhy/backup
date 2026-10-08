#pragma once
#include <string>
#include <vector>
#include <list>
#include <map>
#include <memory>
#include <iostream>
#include <chrono>

// 1. UML 常见大写基础类型别名
using String = std::string;
using Boolean = bool;
using Integer = int;
using Long = long long;
using Double = double;

template <typename T>
using List = std::vector<T>;

// 2. 基础时间与验证结构
struct DateTime {
    std::string value;
};

struct ValidationResult {
    bool isValid = true;
    std::string message;
};

// 3. 通用枚举补充
enum class LogLevel { Debug, Info, Warning, Error };
enum class HashAlgorithm { MD5, SHA256, CRC32 };

// 4. 补充确实缺失的枚举与结构
enum class FileState { Normal, Modified, Deleted, New };
enum class OverwritePolicy { Always, Never, IfNewer, Ask };
enum class ScheduleType { Once, Daily, Weekly, Monthly };
enum class MissedRunPolicy { RunImmediately, Skip, Ask };

struct VerificationReport {
    bool passed = true;
    std::string details;
};

struct RestoreResult {
    bool success = true;
    std::string message;
};

