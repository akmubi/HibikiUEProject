#include "HbkEm6000_IntermissionTaskPhase5.h"
#include "Components/SceneComponent.h"

AHbkEm6000_IntermissionTaskPhase5::AHbkEm6000_IntermissionTaskPhase5(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->TransformWolfStateEvent = NULL;
    this->BossFloorLocationZ = 0.00f;
    this->FootStepHeightMax = 0.00f;
    this->PlayerInhibitControlTime = 0.00f;
    this->BossGaugeRecoverTime = 0.00f;
}

void AHbkEm6000_IntermissionTaskPhase5::OnEndFinishCamera() {
}


