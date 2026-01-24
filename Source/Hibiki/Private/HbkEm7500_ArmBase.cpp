#include "HbkEm7500_ArmBase.h"
#include "Components/StaticMeshComponent.h"
#include "HbkRepulsionComponent.h"
#include "HbkShieldComponent.h"

AHbkEm7500_ArmBase::AHbkEm7500_ArmBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HbkRepulsion = CreateDefaultSubobject<UHbkRepulsionComponent>(TEXT("HbkRepulsion"));
    this->HbkShield = CreateDefaultSubobject<UHbkShieldComponent>(TEXT("UHbkShield"));
    this->BarrierMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrierMesh"));
    this->BarrierActiveSound = NULL;
    this->BarrierCrackSound = NULL;
    this->BarrierBreakSound = NULL;
    this->BarrierBreakParticle = NULL;
    this->ArmType = EHbkEm7500ArmType::Invalid;
    this->ChangeMaterial = NULL;
    this->DefaultMaterial = NULL;
    this->BreakArmSound = NULL;
    this->BreakArmParticle = NULL;
    this->DamageParamValue = 0.00f;
    this->DamageMaterialTime = 0.00f;
    this->PossibleLookDegreeRange = 0.00f;
    this->ShieldDurableValue = 0.00f;
    this->BreakPanelImpulsePower = 0.00f;
    this->BreakPanelParticle = NULL;
    this->BreakPanelSound = NULL;
}

void AHbkEm7500_ArmBase::SetJointChainPhysicsWeight(float Weight, bool bInterp, float InterpTime) {
}

void AHbkEm7500_ArmBase::SetEnableTakeDamage(bool IsEnableTakeDamage, bool IsEnableShield, bool IsEnableRepulsion) {
}

void AHbkEm7500_ArmBase::ResetArm(bool bShow) {
}

void AHbkEm7500_ArmBase::RecoveryDamage() {
}

void AHbkEm7500_ArmBase::OnTryDamageBlock(AActor* DamageCauser, const UDamageType* DamageType, float DamageValue) {
}

void AHbkEm7500_ArmBase::OnDamageShield(float CurrentDurableValue) {
}

void AHbkEm7500_ArmBase::OnChangedHealth(float Value, float PrevValue, float ValueRate) {
}

void AHbkEm7500_ArmBase::OnBrokenAllShield() {
}

bool AHbkEm7500_ArmBase::IsPlayingAttack() const {
    return false;
}

void AHbkEm7500_ArmBase::HealDamage(float HealValue) {
}

float AHbkEm7500_ArmBase::GetShieldDurable() const {
    return 0.0f;
}

AActor* AHbkEm7500_ArmBase::GetKaleActor() const {
    return NULL;
}

float AHbkEm7500_ArmBase::GetJointChainPhysicsWeight() const {
    return 0.0f;
}

bool AHbkEm7500_ArmBase::GetIsDamaged() const {
    return false;
}

bool AHbkEm7500_ArmBase::GetIsBreakShield() const {
    return false;
}

void AHbkEm7500_ArmBase::ClearIsDamaged() {
}

void AHbkEm7500_ArmBase::ClearIsBreakShield() {
}

void AHbkEm7500_ArmBase::ChangeMeshKit(EHbkKaleArmMeshKit MeshKit) {
}

void AHbkEm7500_ArmBase::BreakPanel(int32 BreakNum) {
}

void AHbkEm7500_ArmBase::BreakArm() {
}




