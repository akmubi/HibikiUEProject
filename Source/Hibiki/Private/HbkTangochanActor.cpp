#include "HbkTangochanActor.h"

AHbkTangochanActor::AHbkTangochanActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivateRenderTime = 0.00f;
    this->ActivateDist = 0.00f;
}

void AHbkTangochanActor::OnSignificanceChanged(bool IsActive) {
}


