#include "HbkEm0310_GatlingPoint.h"

AHbkEm0310_GatlingPoint::AHbkEm0310_GatlingPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FollowSpeed = 100.00f;
    this->FollowNoteCount = 1;
}

void AHbkEm0310_GatlingPoint::SetOwningChara(AHbkCharacter* OwningChara) {
}


