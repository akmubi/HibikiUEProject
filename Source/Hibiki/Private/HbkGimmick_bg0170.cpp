#include "HbkGimmick_bg0170.h"

AHbkGimmick_bg0170::AHbkGimmick_bg0170(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bSaveType = EHbkGimmick_bg0170_SaveType::BG0170_SAVE_NONE;
    this->buttonType = BT_DEFAULT;
    this->EnableJudgeDist = 1000.00f;
    this->defaultButtonNone = false;
    this->waitActivate = false;
    this->bNoSaveOnActivate = false;
    this->pButtonSE = NULL;
    this->pButtonBarSyncSE = NULL;
    this->pButtonAvailableSE = NULL;
    this->DefaultCollisionEnabled = ECollisionEnabled::NoCollision;
    this->DefaultPartnerPointEnable = false;
}

void AHbkGimmick_bg0170::SetPartnerPointEnabled(bool Enable) {
}

void AHbkGimmick_bg0170::OnSyncBeatEventforLongRange(const int32 NoteCount) {
}

void AHbkGimmick_bg0170::OnSyncActivate(const int32 NoteCount) {
}

void AHbkGimmick_bg0170::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkGimmick_bg0170::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkGimmick_bg0170::OnComboSuccess() {
}

void AHbkGimmick_bg0170::OnComboFailure() {
}

float AHbkGimmick_bg0170::GetButtonRate() {
    return 0.0f;
}





