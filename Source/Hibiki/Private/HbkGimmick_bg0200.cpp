#include "HbkGimmick_bg0200.h"

AHbkGimmick_bg0200::AHbkGimmick_bg0200(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bSaveType = EHbkGimmick_bg0200SaveType::BG0200_SVT_NONE;
}

void AHbkGimmick_bg0200::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkGimmick_bg0200::OnBg0200_BarEvent(int32 Count, bool downBeat) {
}


