#include "HbkGimmick_SubMissionDustBox.h"

AHbkGimmick_SubMissionDustBox::AHbkGimmick_SubMissionDustBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bIsCorrectDustBox = true;
    this->MaxLife = 80.00f;
}

void AHbkGimmick_SubMissionDustBox::OnStartSubMission() {
}

void AHbkGimmick_SubMissionDustBox::OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& HitResult, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkGimmick_SubMissionDustBox::OnLastProgress() {
}

void AHbkGimmick_SubMissionDustBox::OnEndSubMission() {
}

void AHbkGimmick_SubMissionDustBox::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}



