#include "HbkAnimNotifyState_AttackChangingShape.h"

UHbkAnimNotifyState_AttackChangingShape::UHbkAnimNotifyState_AttackChangingShape() {
    this->DurationTime = 0.00f;
    this->TotalDurationTime = 0.00f;
    this->AttackSocketName = TEXT("Origin");
    this->OverrideDamageType = NULL;
    this->bContinuousHit = false;
    this->bIsChangeRadius = false;
    this->TargetRadius = 50.00f;
    this->RadiusEasingFunc = EEasingFunc::Linear;
    this->RadiusBlendExp = 2.00f;
    this->RadiusSteps = 2;
    this->AttackComp = NULL;
}


