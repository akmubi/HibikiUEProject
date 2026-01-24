#include "HbkPlayerAnimInstance.h"

UHbkPlayerAnimInstance::UHbkPlayerAnimInstance() {
    this->bIsInAir = false;
    this->bIsJumping = false;
    this->bIsRhythmJumping = false;
    this->JumpCount = 0;
    this->bWasJump = false;
    this->bIsAirDashFalling = false;
    this->JumpPlayRate = 1.00f;
    this->Jump2ndPlayRate = 1.00f;
    this->Jump2ndPlayRateBase = 1.20f;
    this->RhythmJumpCount = 0;
    this->moveSpeed = 0.00f;
    this->MoveBank = 0.00f;
    this->MoveStartRate = 1.00f;
    this->bIsMoveRun = false;
    this->bIsRunStop = false;
    this->MoveRunThreshold = 350.00f;
    this->bMoveStart = false;
    this->bIsDuringAction = false;
    this->bIsDuringAttack = false;
    this->bIgnoreCustomRootMotion = false;
    this->NotSyncPlayRate = 1.00f;
    this->bForceLanding = false;
    this->bIsInNarrowSpace = false;
    this->ExIdleBlendSpaceValue = 0.00f;
    this->FootIKWeight = 0.00f;
    this->FootIKCurveName = TEXT("FootIK");
    this->FootIKWeightInterpSpeed = 20.00f;
    this->BlendAlphaInterpSpeed = 5.00f;
}

void UHbkPlayerAnimInstance::SetMoveSpeed_Implementation(float VelocitySize) {
}

void UHbkPlayerAnimInstance::SetExIdleBlendSpaceValue(float BlendSpaceValue) {
}

UAnimMontage* UHbkPlayerAnimInstance::PlaySlotAnimationAsDM_Ex(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
    return NULL;
}

float UHbkPlayerAnimInstance::Montage_Play_Ex(UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages) {
    return 0.0f;
}

bool UHbkPlayerAnimInstance::IsEnableFootIK() const {
    return false;
}

AHbkPlayerCharacterBase* UHbkPlayerAnimInstance::GetHbkPlayer() const {
    return NULL;
}

float UHbkPlayerAnimInstance::GetFootIKWeight() const {
    return 0.0f;
}


