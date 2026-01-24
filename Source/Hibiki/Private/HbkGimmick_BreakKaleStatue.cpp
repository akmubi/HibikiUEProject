#include "HbkGimmick_BreakKaleStatue.h"

AHbkGimmick_BreakKaleStatue::AHbkGimmick_BreakKaleStatue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->AttackCountLimit = 30;
    this->AnimationPlaybackSpeed = 1.00f;
    this->KaleStatueBarWidgetComponent = NULL;
    this->AttackCount = 0;
    this->ExpressionIndex = 0;
    this->bIsDestroyed = false;
    this->NormalHitVfx = NULL;
    this->BreakVfx = NULL;
    this->BreakSound = NULL;
    this->RisingSound = NULL;
    this->NormalAttackSound = NULL;
    this->SkeletalMeshComponent = NULL;
    this->DamageComponent = NULL;
}

void AHbkGimmick_BreakKaleStatue::OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkGimmick_BreakKaleStatue::OnloadCompleted() {
}

void AHbkGimmick_BreakKaleStatue::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}


