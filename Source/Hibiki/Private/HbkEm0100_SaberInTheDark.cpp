#include "HbkEm0100_SaberInTheDark.h"

AHbkEm0100_SaberInTheDark::AHbkEm0100_SaberInTheDark(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DuringRootMotionMode = ERootMotionMode::IgnoreRootMotion;
    this->AnimationTypesNum = 3;
}

void AHbkEm0100_SaberInTheDark::RequestMove(FVector InMovePos, float InAcceptanceRadius, float InMoveSpeedRate) {
}

void AHbkEm0100_SaberInTheDark::RequestAttack() {
}

bool AHbkEm0100_SaberInTheDark::GetRequestMove() const {
    return false;
}

int32 AHbkEm0100_SaberInTheDark::GetAnimationType() const {
    return 0;
}

void AHbkEm0100_SaberInTheDark::CancelRequestMove() {
}


