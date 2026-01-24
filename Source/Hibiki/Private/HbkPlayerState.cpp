#include "HbkPlayerState.h"

AHbkPlayerState::AHbkPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Health = 0.00f;
    this->MaxHealth = 0.00f;
    this->RhythmGauge = 0.00f;
    this->OverChargeCount = 0;
    this->OverrideCostumeStage = -1;
}


