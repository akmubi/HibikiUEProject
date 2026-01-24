#include "HbkEm6000_IntermissionTaskPhase4.h"

AHbkEm6000_IntermissionTaskPhase4::AHbkEm6000_IntermissionTaskPhase4(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TransformHumanDamageAnimEm6500 = NULL;
    this->Phase4StateEvent = NULL;
    this->PlayerDistance = 1000.00f;
}

void AHbkEm6000_IntermissionTaskPhase4::OnEndFinishCamera() {
}


