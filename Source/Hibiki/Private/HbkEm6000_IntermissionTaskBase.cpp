#include "HbkEm6000_IntermissionTaskBase.h"
#include "HbkRhythmSynchroComponent.h"

AHbkEm6000_IntermissionTaskBase::AHbkEm6000_IntermissionTaskBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RhythmSynchroComponent = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchroComponent"));
    this->bIsStartCheckPoint = false;
    this->State = EHbkEm6000_IntermissionState::None;
}

void AHbkEm6000_IntermissionTaskBase::CallOnEndFinishCamera() {
}


