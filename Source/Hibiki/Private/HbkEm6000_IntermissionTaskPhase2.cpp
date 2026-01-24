#include "HbkEm6000_IntermissionTaskPhase2.h"

AHbkEm6000_IntermissionTaskPhase2::AHbkEm6000_IntermissionTaskPhase2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TransformHumanDamageAnimEm6500 = NULL;
    this->PlayerDistance = 1000.00f;
}

void AHbkEm6000_IntermissionTaskPhase2::OnEndFinishCamera() {
}


