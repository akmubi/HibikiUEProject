#include "HbkGimmick_MoveContainer.h"

AHbkGimmick_MoveContainer::AHbkGimmick_MoveContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RestartEventType = EHbkRestartEventType::Normal;
    this->DamageType = NULL;
}


