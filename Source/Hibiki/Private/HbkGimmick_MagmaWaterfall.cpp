#include "HbkGimmick_MagmaWaterfall.h"

AHbkGimmick_MagmaWaterfall::AHbkGimmick_MagmaWaterfall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RestartEventType = EHbkRestartEventType::Burned;
    this->DamageType = NULL;
}


