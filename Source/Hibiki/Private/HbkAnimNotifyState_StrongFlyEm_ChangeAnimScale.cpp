#include "HbkAnimNotifyState_StrongFlyEm_ChangeAnimScale.h"

UHbkAnimNotifyState_StrongFlyEm_ChangeAnimScale::UHbkAnimNotifyState_StrongFlyEm_ChangeAnimScale() {
    this->MinDistance = 0.00f;
    this->MaxDistance = 1000.00f;
    this->MinScale = 0.00f;
    this->MaxScale = 1.00f;
    this->MinDistance_OnHit = 0.00f;
    this->MaxDistance_OnHit = 100.00f;
    this->MinScale_OnHit = 0.00f;
    this->MaxScale_OnHit = 1.00f;
    this->bCalcScaleDuringTick = true;
    this->InterpSpeedOnTick = 10.00f;
}


