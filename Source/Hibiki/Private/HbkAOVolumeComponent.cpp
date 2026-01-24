#include "HbkAOVolumeComponent.h"

UHbkAOVolumeComponent::UHbkAOVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Movable;
    this->bIsAddCapsuleHalfHeightForMin = true;
    this->DrawEnableDistanceMin = 500.00f;
    this->DrawEnableDistanceMax = 2000.00f;
    this->TraceType = TraceTypeQuery1;
    this->bIsTraceStartBySocket = false;
}


