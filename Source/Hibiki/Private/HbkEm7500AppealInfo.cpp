#include "HbkEm7500AppealInfo.h"

FHbkEm7500AppealInfo::FHbkEm7500AppealInfo() {
    this->Probability = 0.00f;
    this->RetentionCount = 0;
    this->DecrementType = EHbkEm7500RecordDecrementType::All;
    this->HitCheckType = EHbkEm7500AppealHitCheckType::None;
}

