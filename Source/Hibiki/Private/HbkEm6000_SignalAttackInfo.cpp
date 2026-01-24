#include "HbkEm6000_SignalAttackInfo.h"

FHbkEm6000_SignalAttackInfo::FHbkEm6000_SignalAttackInfo() {
    this->bIsReceivedNotifySignalAttackPre = false;
    this->ElapsedTimeFromReceivedNotifySignalAttackPre = 0.00f;
    this->bIsRunningBeforeSignalAttackTask = false;
}

