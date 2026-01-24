#include "HbkGimmick_FireGate.h"

AHbkGimmick_FireGate::AHbkGimmick_FireGate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->pBoxCollision = NULL;
}

void AHbkGimmick_FireGate::StopFireVFX() {
}

void AHbkGimmick_FireGate::OnPartnerTargetSuccessAction() {
}

void AHbkGimmick_FireGate::OnPartnerTargetLockOn() {
}

void AHbkGimmick_FireGate::OnPartnerTargetFailedAction() {
}

void AHbkGimmick_FireGate::OnPartnerTargetEndPartnerMiniGame() {
}

void AHbkGimmick_FireGate::OnPartnerTargetBeginPartnerMiniGame() {
}

void AHbkGimmick_FireGate::OnNoteEvent_FireGate(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_FireGate::OnNoteEvent_FireDamage(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_FireGate::OnNote16thEvent_FireGate(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_FireGate::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkGimmick_FireGate::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}


