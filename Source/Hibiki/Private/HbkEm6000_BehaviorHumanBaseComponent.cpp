#include "HbkEm6000_BehaviorHumanBaseComponent.h"

UHbkEm6000_BehaviorHumanBaseComponent::UHbkEm6000_BehaviorHumanBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheckTimeForEscape = 2.00f;
    this->DamageCountForEscape = 3;
}

void UHbkEm6000_BehaviorHumanBaseComponent::OnMagnetReached(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* MagneticPoint) {
}

bool UHbkEm6000_BehaviorHumanBaseComponent::OnContinuousDamageEventForEscape() {
    return false;
}

bool UHbkEm6000_BehaviorHumanBaseComponent::OnBeginPartnerAttackEventForEscapeFromPeppermintAttack(EHbkPartnerType PartnerType, EHbkPartnerAttackType PartnerAttackType) {
    return false;
}

bool UHbkEm6000_BehaviorHumanBaseComponent::OnActionEventForWaitQuarter(float DeltaTime, float ElapsedTime) {
    return false;
}

bool UHbkEm6000_BehaviorHumanBaseComponent::OnActionEventForEscapeShot(float DeltaTime, float ElapsedTime) {
    return false;
}

bool UHbkEm6000_BehaviorHumanBaseComponent::OnActionEventForEscapeEnd(float DeltaTime, float ElapsedTime) {
    return false;
}

bool UHbkEm6000_BehaviorHumanBaseComponent::OnActionEventForEscape(float DeltaTime, float ElapsedTime) {
    return false;
}


