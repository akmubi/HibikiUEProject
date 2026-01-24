#include "HbkGimmick_BreakBox.h"

AHbkGimmick_BreakBox::AHbkGimmick_BreakBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxType = BB_NORMAL;
    this->RadiusMovePhysics = 0.00f;
    this->StopVelocity = 0.00f;
    this->DebugDrawFlag = false;
    this->StartDitherTime = 0.00f;
    this->DitherTimeToDisappear = 0.00f;
}

void AHbkGimmick_BreakBox::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkGimmick_BreakBox::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}


