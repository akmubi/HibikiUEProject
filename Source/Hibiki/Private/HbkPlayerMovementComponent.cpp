#include "HbkPlayerMovementComponent.h"

UHbkPlayerMovementComponent::UHbkPlayerMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->JumpVelocity2nd = 2000.00f;
    this->GravityScale2nd = 0.50f;
    this->MaxJumpVelocityZ = 2000.00f;
    this->MoveAnimCurveName = TEXT("MoveCurve");
}

bool UHbkPlayerMovementComponent::IsRhythmJumping() const {
    return false;
}

bool UHbkPlayerMovementComponent::ISAirDashMode() const {
    return false;
}


