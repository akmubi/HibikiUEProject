#include "HbkPlayerFocalPointComponent.h"

UHbkPlayerFocalPointComponent::UHbkPlayerFocalPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAttachParentBound = true;
    this->TraceChannel = ECC_WorldStatic;
    this->CameraTraceChannel = ECC_WorldStatic;
    this->CollisionSize = 10.00f;
}


