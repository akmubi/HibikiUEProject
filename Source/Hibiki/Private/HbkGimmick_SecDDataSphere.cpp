#include "HbkGimmick_SecDDataSphere.h"

AHbkGimmick_SecDDataSphere::AHbkGimmick_SecDDataSphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SaveType = EHbkGimmick_SecDDataSphereSaveType::SAVE_NONE;
    this->debugDrawDist = 5000.00f;
    this->dsType = DS_NORMAL;
    this->AnimType = BG0370_NONE;
}

void AHbkGimmick_SecDDataSphere::SetActivateInteract(const bool Flag) {
}

void AHbkGimmick_SecDDataSphere::OnPartnerTargetPointSuccessAction() {
}

void AHbkGimmick_SecDDataSphere::OnPartnerTargetPointDecidedToTarget() {
}

void AHbkGimmick_SecDDataSphere::OnPartnerTargetPointBeginAction() {
}

void AHbkGimmick_SecDDataSphere::OnNoteWhole_SecDDataSphere(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_SecDDataSphere::OnNoteQuarter_SecDDataSphere(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_SecDDataSphere::OnNoteHalf_SecDDataSphere(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_SecDDataSphere::OnNote8th_SecDDataSphere(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_SecDDataSphere::OnNote16th_SecDDataSphere(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_SecDDataSphere::OnMoveStart() {
}

void AHbkGimmick_SecDDataSphere::OnMoveEnd() {
}

void AHbkGimmick_SecDDataSphere::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkGimmick_SecDDataSphere::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkGimmick_SecDDataSphere::OnCommonResourceLoadEnd() {
}

void AHbkGimmick_SecDDataSphere::MidiEvent_SecDDataSphere(int32 NoteNo, int32 Velocity) {
}

float AHbkGimmick_SecDDataSphere::GetAnimationOpenRate() {
    return 0.0f;
}


