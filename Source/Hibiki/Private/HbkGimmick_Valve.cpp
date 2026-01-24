#include "HbkGimmick_Valve.h"

AHbkGimmick_Valve::AHbkGimmick_Valve(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->CanActivateNum = 1;
    this->bActivateTagsOnDamage = false;
    this->bBreak = false;
    this->bAutoDeactivate = true;
    this->IsPartnerPointEnabled = false;
    this->bDone = false;
}

void AHbkGimmick_Valve::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}


