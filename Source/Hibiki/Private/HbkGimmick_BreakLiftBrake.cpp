#include "HbkGimmick_BreakLiftBrake.h"

AHbkGimmick_BreakLiftBrake::AHbkGimmick_BreakLiftBrake(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->pPanelBreak01 = NULL;
    this->pPanelBreak02 = NULL;
    this->pPanelBreak03 = NULL;
}

void AHbkGimmick_BreakLiftBrake::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkGimmick_BreakLiftBrake::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}


