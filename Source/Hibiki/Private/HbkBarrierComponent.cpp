#include "HbkBarrierComponent.h"

UHbkBarrierComponent::UHbkBarrierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BarrierSurfaceType = NULL;
    this->DurableValueMax = 100.00f;
    this->BarrierDamageRate = 1.00f;
    this->DamageReductionRate = 0.00f;
    this->BarrierRecoveryTime = 14.00f;
    this->BarrierEffect = NULL;
    this->BarrierDamageEffect = NULL;
    this->BarrierBreakEffect = NULL;
    this->BarrierActivateSE = NULL;
    this->BarrierBreakSE = NULL;
    this->bInitEnable = true;
    this->bBarrierEnable = false;
    this->bIsBreakedByRepelled = false;
    this->bIsPepDamageOnly = true;
    this->EffectSizeRate = 1.00f;
}

void UHbkBarrierComponent::StartBarrierWithNewValue(float NewDurable, float NewDamageRate, float NewReductionRate) {
}

void UHbkBarrierComponent::SetSurfaceType(UHbkSurfaceAsset* NewBarrierSurfaceType) {
}

void UHbkBarrierComponent::SetRecoveryTime(const float NewRecoveryTime) {
}

void UHbkBarrierComponent::SetIsPepDamageOnly(bool IsPeppermintOnly) {
}

void UHbkBarrierComponent::SetBarrierEffectAndSE(UParticleSystem* Ef, UParticleSystem* DamageEf, UParticleSystem* BreakEf, UAkAudioEvent* ActiveSE, UAkAudioEvent* BreakSE) {
}

void UHbkBarrierComponent::SetAutoRedeployment(bool NewAutoRedeployment) {
}

void UHbkBarrierComponent::ResetFlag() {
}

void UHbkBarrierComponent::OnRepelled(const AActor* Blocker, const FHbkBlockDamageParam& BlockParam) {
}

void UHbkBarrierComponent::OnPostOwnerCharaDied() {
}

void UHbkBarrierComponent::OnDamageReaction() {
}

void UHbkBarrierComponent::NotifyBarrierActivate() {
}

void UHbkBarrierComponent::NotifyAnyTakeDamage(AActor* DamagedActor, float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

bool UHbkBarrierComponent::IsRecoveryEnable() {
    return false;
}

bool UHbkBarrierComponent::IsBroken() const {
    return false;
}

float UHbkBarrierComponent::GetRecoveryTime() const {
    return 0.0f;
}

float UHbkBarrierComponent::GetDurableValue() const {
    return 0.0f;
}

bool UHbkBarrierComponent::GetAutoRedeployment() const {
    return false;
}

void UHbkBarrierComponent::CancelRecovery() {
}

void UHbkBarrierComponent::BarrierRecoveryBegin() {
}

void UHbkBarrierComponent::BarrierDeactivate(bool bIncrementMetrics, bool bNotInvokeEffectAndSound) {
}

void UHbkBarrierComponent::BarrierActivate() {
}


