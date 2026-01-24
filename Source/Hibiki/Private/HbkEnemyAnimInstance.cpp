#include "HbkEnemyAnimInstance.h"

UHbkEnemyAnimInstance::UHbkEnemyAnimInstance() {
    this->InterpSpeedByMovingRotate = 5.00f;
    this->bIsStun = false;
    this->bIsAttackState = false;
    this->bIsActionState = false;
    this->bIsDamageState = false;
    this->bEnableTurnByMotion = false;
    this->bIsTurn = false;
    this->TurnYaw = 0.00f;
    this->AimYaw = 0.00f;
    this->AimPitch = 0.00f;
    this->HeadLookIkWeight = 0.00f;
    this->bIsHeadLookIkEnable = true;
    this->bIsHeadLookIkEnableForNotify = false;
    this->HeadLookIkWeightAddRate = 1.00f;
    this->HeadLookIkWeightSubRate = 1.00f;
    this->HeadLookDisableCurveName = TEXT("HeadLookOFF");
    this->ShootingAimOffsetWeight = 0.00f;
    this->bIsShootingAimOffsetEnable = false;
    this->bIsBodyAimEnable = false;
    this->DamageAdditiveAlpha = 0.00f;
    this->AimPitchLimit = 45.00f;
    this->AimYawLimit = 45.00f;
    this->bIsJump = false;
    this->JumpAxisValue = 0.00f;
    this->bIsOverkillState = false;
    this->bIsJamComboStateEnd = false;
    this->StrafeBlendSpaceMoveRange = 650.00f;
    this->StrafeMoveSpeed = 0.00f;
    this->StrafeMoveInterpSpeed = 3.00f;
    this->StrafeMoveAngleForward = 0.00f;
    this->StrafeMoveAngleBehind = 0.00f;
    this->StrafeChangeDiff = 30.00f;
    this->StrafeDirInterpSpeed = 8.00f;
    this->IsStrafeBehind = false;
    this->StrafeBehindChangeInterval = 0.20f;
    this->StrafeBehindChangeCoolTime = 0.00f;
    this->StrafeOtherSideAngleInterpSpeed = 3.00f;
    this->bDebugEnabledStrafeMove = false;
}

void UHbkEnemyAnimInstance::SetMoveOffsetScaleVector(FVector Vector) {
}

void UHbkEnemyAnimInstance::SetMoveInhibitScaleVector(float Time, FVector Vector) {
}

void UHbkEnemyAnimInstance::SetJump_Implementation(float InJumpAxisValue) {
}

void UHbkEnemyAnimInstance::RotateOwneningActorWhenMoving(bool IsStrafing) {
}


AHbkEnemyCharacter* UHbkEnemyAnimInstance::GetHbkEnemy() const {
    return NULL;
}

void UHbkEnemyAnimInstance::CalcRotationYawAtAngle_Implementation(const FRotator& TargetRot, bool IsTurnOnly) {
}

void UHbkEnemyAnimInstance::CalcRotationYaw_Implementation(AActor* Target, bool IsTurnOnly) {
}


