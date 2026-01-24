#include "HbkEm0300_AnimInstance.h"

UHbkEm0300_AnimInstance::UHbkEm0300_AnimInstance() {
    this->bUseBlendMontage = true;
    this->CurrentUpperBodyState = EUpperBodyType::DefRot;
    this->Em0300 = NULL;
    this->bIsPlayingShootingAnim = false;
    this->PlayingShootingMontageIdx = 0;
    this->AimOffsetPitch = 0.00f;
    this->AimOffsetYaw = 0.00f;
    this->MoveDirection = 0;
    this->AddYawUpperBody = 0.00f;
    this->bIsPlayingGatringAnim = false;
}

void UHbkEm0300_AnimInstance::CalcMoveDirectionNotify() {
}


