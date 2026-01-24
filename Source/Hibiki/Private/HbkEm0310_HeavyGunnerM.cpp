#include "HbkEm0310_HeavyGunnerM.h"

AHbkEm0310_HeavyGunnerM::AHbkEm0310_HeavyGunnerM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GatlingHomingTargetName = TEXT("spine_02");
    this->PreAttackSign = NULL;
    this->GroundAttackSign = NULL;
    this->bIsShootLineEffectTypeByStep = false;
    this->ChargePrgSE = NULL;
}

void AHbkEm0310_HeavyGunnerM::ReceivePlayerDamage(float Damage, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkEm0310_HeavyGunnerM::PlayChargePrgSE(int32 NoteCount, bool bDownBeat) {
}

bool AHbkEm0310_HeavyGunnerM::GetIsPlayingGatlingAnim() const {
    return false;
}

float AHbkEm0310_HeavyGunnerM::GetAimOffsetYaw() const {
    return 0.0f;
}

float AHbkEm0310_HeavyGunnerM::GetAimOffsetPitch() const {
    return 0.0f;
}


