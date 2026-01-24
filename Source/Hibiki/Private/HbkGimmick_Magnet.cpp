#include "HbkGimmick_Magnet.h"

AHbkGimmick_Magnet::AHbkGimmick_Magnet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bSaveType = EHbkGimmick_Magnet_SaveType::MAGNET_SAVE_NONE;
    this->barrier = false;
    this->Hide = false;
}

void AHbkGimmick_Magnet::SetMagnetPointEnable(bool Flag) {
}

void AHbkGimmick_Magnet::OnSyncBeatEvent(int32 NoteCount) {
}

void AHbkGimmick_Magnet::OnReadyGimmick(AHbkGimmickBase* GimmickBase) {
}

void AHbkGimmick_Magnet::OnReachMagnet(AHbkPlayerCharacterBase* pPlayer, UHbkMagneticPointComponent* pMagneticComponent) {
}

void AHbkGimmick_Magnet::OnPostResetPlayerPosition(const FTransform& Transform, const FGameplayTagContainer& RestartPointTags) {
}

void AHbkGimmick_Magnet::OnPlayerLanding() {
}

void AHbkGimmick_Magnet::OnHitMagnet(AHbkPlayerCharacterBase* pPlayer, UHbkMagneticPointComponent* pMagneticComponent) {
}

void AHbkGimmick_Magnet::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkGimmick_Magnet::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}


