#include "HbkEm0710_EliteBubble.h"

AHbkEm0710_EliteBubble::AHbkEm0710_EliteBubble(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlyingAttackInhibitRate = 0.00f;
}

void AHbkEm0710_EliteBubble::SetFlyingAttackInhibitRate(float Rate) {
}

bool AHbkEm0710_EliteBubble::CheckInhibitFlyingAttack() const {
    return false;
}


