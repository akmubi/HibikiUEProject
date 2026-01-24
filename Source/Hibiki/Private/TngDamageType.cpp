#include "TngDamageType.h"
#include "Templates/SubclassOf.h"

UTngDamageType::UTngDamageType() {
    this->DamageAmount = 0.00f;
    this->bIsToughDamageByRate = false;
    this->ToughDamageAmount = 0.00f;
    this->bIsBarrierDamageByRate = false;
    this->BarrierDamageAmount = 0.00f;
    this->ShieldDamageAmount = 0.00f;
    this->bIsSyncImpact = true;
    this->bCanFriendlyFire = false;
    this->bCanParry = true;
    this->bCanLateParry = true;
    this->bCanDodge = true;
    this->bPlayHitEffect = true;
    this->bPlayHitSE = true;
    this->Knockback = 0.00f;
    this->BlockKnockback = 0.00f;
    this->FlightDuration = 0.00f;
    this->DownStateTime = 1.00f;
    this->JamComboReceptionNoteCount = 3.00f;
    this->DamageReactScale = 1.00f;
    this->DamageInvincibleNoteCount = 0.00f;
    this->BaseWindStunTime = 0.00f;
}

bool UTngDamageType::IsSyncImpactDamage() const {
    return false;
}

float UTngDamageType::GetKnockbackValue() const {
    return 0.0f;
}

float UTngDamageType::GetFlightDuration() const {
    return 0.0f;
}

FGameplayTagContainer UTngDamageType::GetDamageTagsFromDamageType(const UDamageType* DmgType) {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UTngDamageType::GetDamageTagsFromClass(TSubclassOf<UDamageType> DmgTypeClass) {
    return FGameplayTagContainer{};
}

float UTngDamageType::GetBlockKnockbackValue() const {
    return 0.0f;
}

FGameplayTagContainer UTngDamageType::GetAttackTagsFromDamageType(const UDamageType* DmgType) {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UTngDamageType::GetAttackTagsFromClass(TSubclassOf<UDamageType> DmgTypeClass) {
    return FGameplayTagContainer{};
}





