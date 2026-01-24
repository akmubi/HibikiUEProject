#include "HbkEnemyGrapplingEventComponent.h"

UHbkEnemyGrapplingEventComponent::UHbkEnemyGrapplingEventComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SuccessInputRangeTime = 0.08f;
    this->ContinuousInputCoolTime = 0.10f;
    this->bEnablePlayerElapse = false;
}

void UHbkEnemyGrapplingEventComponent::Receive_OnSuccessQTE(bool bPerfect) {
}

void UHbkEnemyGrapplingEventComponent::Receive_OnEndGrappling(const FHbkGrapplingInfo& GrapplingInfo) {
}

void UHbkEnemyGrapplingEventComponent::Receive_OnBeginGrappling(const FHbkGrapplingInfo& GrapplingInfo) {
}

void UHbkEnemyGrapplingEventComponent::Receive_OnAbortGrappling(const FHbkGrapplingInfo& GrapplingInfo) {
}

bool UHbkEnemyGrapplingEventComponent::GetPreTotalResult() const {
    return false;
}


