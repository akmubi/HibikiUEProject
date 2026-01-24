#include "HbkGimmick_FallingObj.h"

AHbkGimmick_FallingObj::AHbkGimmick_FallingObj(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->pWindNoiseSE = NULL;
}

void AHbkGimmick_FallingObj::OnNoteEvent_FallingObj(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_FallingObj::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkGimmick_FallingObj::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkGimmick_FallingObj::OnCommonResourceSuccess() {
}


