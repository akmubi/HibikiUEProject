#include "HbkFlyingEnemyCharacter.h"

AHbkFlyingEnemyCharacter::AHbkFlyingEnemyCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlyingHeightDefault = 500.00f;
    this->FlyingHeightFromGround_Min = 100.00f;
    this->FlyingHeightThreshold = 50.00f;
    this->FlyingHeightInterpSpeedDefault = 5.00f;
    this->GroundPosCheckLength = 1000.00f;
    this->DefaultCapsuleHalfHeight = 90.00f;
    this->bUseFlyingOffsetHeight = false;
    this->FlyingOffsetHeightInterpSpeedToTarget = 7.00f;
    this->FlyingOffsetHeightInterpSpeedToDefault = 1.00f;
    this->FlyingOffsetHeight_MinToGround = 150.00f;
    this->FlyingOffsetHeightTarget_Min = -1000.00f;
    this->FlyingOffsetHeightTarget_Max = 1000.00f;
}

bool AHbkFlyingEnemyCharacter::IsEnabledAdjustHeight() {
    return false;
}

bool AHbkFlyingEnemyCharacter::IsAcceptableHeight() {
    return false;
}

float AHbkFlyingEnemyCharacter::GetFlyingOffsetHeight() const {
    return 0.0f;
}

void AHbkFlyingEnemyCharacter::EnableBattleCapsuleScale() {
}

bool AHbkFlyingEnemyCharacter::AdjustLocationHeight(float DeltaTime) {
    return false;
}


