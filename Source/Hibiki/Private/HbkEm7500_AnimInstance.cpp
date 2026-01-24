#include "HbkEm7500_AnimInstance.h"

UHbkEm7500_AnimInstance::UHbkEm7500_AnimInstance() {
    this->bIsMove = false;
    this->bIsRun = false;
}

void UHbkEm7500_AnimInstance::SetRun(bool Flag) {
}

bool UHbkEm7500_AnimInstance::IsPlayingAnySlotAnimations() const {
    return false;
}

bool UHbkEm7500_AnimInstance::IsOwneningActorOnMoving() const {
    return false;
}



