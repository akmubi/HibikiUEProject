#include "HbkGimmick_ElectricCoreMacaron.h"

AHbkGimmick_ElectricCoreMacaron::AHbkGimmick_ElectricCoreMacaron(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bMoved = false;
}

void AHbkGimmick_ElectricCoreMacaron::OnPartnerTargetPointUnLock() {
}

void AHbkGimmick_ElectricCoreMacaron::OnPartnerTargetPointSuccessAction() {
}

void AHbkGimmick_ElectricCoreMacaron::OnPartnerTargetPointLockon() {
}

void AHbkGimmick_ElectricCoreMacaron::OnPartnerTargetPointBeginAction() {
}

void AHbkGimmick_ElectricCoreMacaron::OnEndAnim() {
}

void AHbkGimmick_ElectricCoreMacaron::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}


