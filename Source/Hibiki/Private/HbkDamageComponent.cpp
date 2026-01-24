#include "HbkDamageComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UHbkDamageComponent::UHbkDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SurfaceType = NULL;
    this->SurfaceTypeOverride = NULL;
    this->DeathTaskClass = NULL;
    this->TakeDamagePreset = EHbkTakeDamagePresetCategory::Any;
    this->DamageTriggerNum = 0;
    this->bTriggerWhenHealthZero = false;
    this->TriggerCauserFlags = 0;
    this->MaxHealth = 100.00f;
    this->bIsAutoZeroDeath = false;
    this->CurrentHealth = 0.00f;
    this->bInitDisableTakeDamage = false;
    this->DeathTask = NULL;
    this->bIsOwnerDied = false;
    this->bUnDeadMode = false;
    this->bIsDamageReserved = false;
}

void UHbkDamageComponent::TakeDamageWithDamageType(const TSubclassOf<UDamageType> DamageTypeClass, bool bApplyDiffParam) {
}

void UHbkDamageComponent::TakeDamage(float Damage, bool bApplyDiffParam) {
}

void UHbkDamageComponent::SetOverrideSurfaceType(UHbkSurfaceAsset* OverrideSurface) {
}

void UHbkDamageComponent::SetMaxHealth(float NewValue) {
}

void UHbkDamageComponent::SetDied() {
}

void UHbkDamageComponent::SetDamageCorrectionList(const TArray<FHbkDamageCorrection>& InDamageCorrectionList) {
}

void UHbkDamageComponent::SetCurrentHealth(float NewValue) {
}

void UHbkDamageComponent::ResetHealth() {
}

bool UHbkDamageComponent::PerformDeath(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
    return false;
}

void UHbkDamageComponent::OnRep_CurrentHealth() {
}

void UHbkDamageComponent::NotifyTakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

void UHbkDamageComponent::NotifyTakeDamage(float Damage, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void UHbkDamageComponent::NotifyTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void UHbkDamageComponent::NotifyAttackImpact(const AHbkCharacter* Attacker) {
}

bool UHbkDamageComponent::IsOwnerDead() const {
    return false;
}

bool UHbkDamageComponent::IsEnableTakeDamage() const {
    return false;
}

float UHbkDamageComponent::GetMaxHealth() const {
    return 0.0f;
}

float UHbkDamageComponent::GetHealthRate() const {
    return 0.0f;
}

float UHbkDamageComponent::GetHealth() const {
    return 0.0f;
}

FGameplayTagContainer UHbkDamageComponent::GetCurrentDamageTag(const AActor* Attacker) {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UHbkDamageComponent::GetCurrentAttackTag(const AActor* Attacker) {
    return FGameplayTagContainer{};
}

void UHbkDamageComponent::EnableTakeDamage() {
}

void UHbkDamageComponent::DisableTakeDamage() {
}

void UHbkDamageComponent::ClearOverrideSurfaceType(UHbkSurfaceAsset* OverrideSurface) {
}

void UHbkDamageComponent::ClearOldDamageParam() {
}

FVector UHbkDamageComponent::CalcDamageInpulseDirection(bool Is2D) {
    return FVector{};
}

float UHbkDamageComponent::AddHealth(float Value) {
    return 0.0f;
}

void UHbkDamageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHbkDamageComponent, CurrentHealth);
}


