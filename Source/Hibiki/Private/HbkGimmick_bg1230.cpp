#include "HbkGimmick_bg1230.h"

AHbkGimmick_bg1230::AHbkGimmick_bg1230(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->pRedLightDefault = NULL;
    this->pRedLightOverride = NULL;
    this->bSaveState = EHbkGimmick_bg1230_SaveType_t::BG1230_SAVE_NONE;
    this->pHpVFXComp = NULL;
}

void AHbkGimmick_bg1230::StartRotAnimation() {
}

void AHbkGimmick_bg1230::SetResume() {
}

void AHbkGimmick_bg1230::SetActivateInteract(bool Flag) {
}

void AHbkGimmick_bg1230::ReceivedEvent() {
}

void AHbkGimmick_bg1230::PowerSupplyEvent() {
}

void AHbkGimmick_bg1230::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkGimmick_bg1230::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkGimmick_bg1230::DispWarning() {
}


