#include "HbkGimmick_bg1260.h"

AHbkGimmick_bg1260::AHbkGimmick_bg1260(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->AnimType = EAHbkGimmick_AHbkGimmick_bg1260AnimType::Action000;
    this->SkeletalMeshComp = NULL;
    this->OneShotAnimComp = NULL;
    this->bMoved = false;
}

void AHbkGimmick_bg1260::OnPartnerTargetPointUnLock() {
}

void AHbkGimmick_bg1260::OnPartnerTargetPointSuccessAction() {
}

void AHbkGimmick_bg1260::OnPartnerTargetPointLockon() {
}

void AHbkGimmick_bg1260::OnPartnerTargetPointFailedAction() {
}

void AHbkGimmick_bg1260::OnPartnerTargetPointBeginAction() {
}

void AHbkGimmick_bg1260::OnEndAnim() {
}

void AHbkGimmick_bg1260::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

EAHbkGimmick_AHbkGimmick_bg1260AnimType AHbkGimmick_bg1260::GetAnimType() const {
    return EAHbkGimmick_AHbkGimmick_bg1260AnimType::Action000;
}


