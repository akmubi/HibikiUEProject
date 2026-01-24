#include "HbkAnimNotifyState_AdjustRotWithinRange.h"

UHbkAnimNotifyState_AdjustRotWithinRange::UHbkAnimNotifyState_AdjustRotWithinRange() {
    this->InterpSpeed = 3.50f;
    this->bLookAtTargetActor = true;
    this->bInterpConstant = false;
    this->TargetActorBBKeyName = TEXT("AttackTarget");
    this->bIsUseLimitRange = false;
    this->LimitRange = 0.00f;
    this->bIsUseLimitAngle = false;
    this->LimitAngle = 0.00f;
}


