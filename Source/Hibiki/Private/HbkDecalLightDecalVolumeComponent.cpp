#include "HbkDecalLightDecalVolumeComponent.h"

UHbkDecalLightDecalVolumeComponent::UHbkDecalLightDecalVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->bUseBPActorWithDecalLightComponent = false;
    this->HbkDecalLight = NULL;
    this->BPActorWithDecalLightComponent = NULL;
    this->DrawPriority = 0;
}


