#include "HbkGimmick_LaserTrap.h"

AHbkGimmick_LaserTrap::AHbkGimmick_LaserTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->defaultTurnOnPower = false;
    this->trapType = LASERTRAP_TYPE_FIX;
    this->AnimType = LT_ANIM_NONE;
    this->FocalCameraClass = NULL;
    this->BulletClass = NULL;
    this->BulletImpuct = 0.00f;
    this->bStateSave = 0;
    this->pMeshComp = NULL;
    this->pAttackComp = NULL;
    this->pRaticleComp = NULL;
    this->pDamageVictim = NULL;
}

void AHbkGimmick_LaserTrap::SetTurnOnPower(TEnumAsByte<EHbkGimmick_LightEmissiveColorType_t> ColorType) {
}

void AHbkGimmick_LaserTrap::SetStopWhenAttack(bool Flag) {
}

void AHbkGimmick_LaserTrap::SetCamera(bool Flag) {
}

void AHbkGimmick_LaserTrap::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkGimmick_LaserTrap::OnDamageConfirmed() {
}

void AHbkGimmick_LaserTrap::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkGimmick_LaserTrap::OnBeatEvent_LaserTrapDeadEvent(int32 Count, bool bDownBeat) {
}

void AHbkGimmick_LaserTrap::OnBeatEvent_LaserTrap(int32 Count, bool bDownBeat) {
}

void AHbkGimmick_LaserTrap::OnBeatEvent_BalloonLaserDeadEvent(int32 Count, bool bDownBeat) {
}

void AHbkGimmick_LaserTrap::MidiEvent_LaserTrap(int32 NoteNo, int32 Velocity) {
}

bool AHbkGimmick_LaserTrap::IsStopWhenAttack() const {
    return false;
}

float AHbkGimmick_LaserTrap::GetAnimationRate() {
    return 0.0f;
}


