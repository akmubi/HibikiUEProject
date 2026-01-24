#include "HbkReflectionVolumeGameComponent.h"

UHbkReflectionVolumeGameComponent::UHbkReflectionVolumeGameComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->DistanceFadeStart = -1.00f;
    this->DistanceFadeFadeDistance = 3000.00f;
    this->IsGlobalVolume = false;
    this->DrawPriority = 0;
}


