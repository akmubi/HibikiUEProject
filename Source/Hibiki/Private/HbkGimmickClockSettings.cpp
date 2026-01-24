#include "HbkGimmickClockSettings.h"

FHbkGimmickClockSettings::FHbkGimmickClockSettings() {
    this->TimeType = EHbkGimmickClockTimeType::TotalPlayTime;
    this->MinuteHandBaseRotation = FRotator(0.0f);
    this->MinuteHandAroundRotation = FRotator(0.0f);
    this->HourHandBaseRotation = FRotator(0.0f);
    this->HourHandAroundRotation = FRotator(0.0f);
}

