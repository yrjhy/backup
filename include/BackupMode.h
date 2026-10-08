#pragma once

enum class BackupMode {
    Full,           // 全量备份
    Incremental,    // 增量备份
    Differential    // 差异备份
};

// 如果老代码里写的是纯 BackupMode::Full 或者直接用整型，
// 也可以定义为传统 enum：
// enum BackupMode { FULL, INCREMENTAL, DIFFERENTIAL };
