#include "HbkGrantBarrierComponent.h"

UHbkGrantBarrierComponent::UHbkGrantBarrierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDebugDraw = false;
    this->BeamEffect = NULL;
    this->TargetSocketName = TEXT("head");
    this->BarrierRecoveryTime = 14.00f;
    this->DrawLineCurve = NULL;
    this->ForecastLineScale = 5.00f;
}

void UHbkGrantBarrierComponent::SetOwnerCharacter(AHbkEnemyCharacter* OwnerChara) {
}

void UHbkGrantBarrierComponent::GrantBarrierDeactivate() {
}

void UHbkGrantBarrierComponent::GrantBarrierActivate(EHbkNote DelayRhythm, int32 DelayCount) {
}


