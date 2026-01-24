#include "HbkGimmick_MagnetRailJump.h"

AHbkGimmick_MagnetRailJump::AHbkGimmick_MagnetRailJump(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->JumpRail = NULL;
    this->bFailureIsGameOver = true;
    this->DamageTypeClass = NULL;
    this->MoveNote = 3;
    this->InputStartNote = 0;
    this->InputJustNote = 2;
    this->InputEndNote = 2;
    this->RailEndNote = 4;
    this->InputSeRef = NULL;
}

void AHbkGimmick_MagnetRailJump::OnMagnetRelease(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* Magnet) {
}

void AHbkGimmick_MagnetRailJump::OnMagnetReached(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* Magnet) {
}

void AHbkGimmick_MagnetRailJump::NextMagnetOnEndInputResultAnim() {
}


