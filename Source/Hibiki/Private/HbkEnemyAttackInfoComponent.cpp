#include "HbkEnemyAttackInfoComponent.h"
#include "Net/UnrealNetwork.h"

UHbkEnemyAttackInfoComponent::UHbkEnemyAttackInfoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttackInfoAsset = NULL;
    this->AttackInfoAssetTest = NULL;
    this->DefaultBattleRange = EHbkAttackRangeType::Range_None;
    this->DistShortRange = 400.00f;
    this->DistMiddleRange = 750.00f;
    this->DistLongRange = 1200.00f;
}

bool UHbkEnemyAttackInfoComponent::SetUseAttackInfoIndex(int32 AttackInfoIndex) {
    return false;
}

bool UHbkEnemyAttackInfoComponent::SetNextAttackInfo(int32 Index) {
    return false;
}

bool UHbkEnemyAttackInfoComponent::SetNextAttackBasicInfo(FGameplayTag AttackNameTag) {
    return false;
}

void UHbkEnemyAttackInfoComponent::ResetAttackInfoList() {
}

void UHbkEnemyAttackInfoComponent::PerformAttackWithMontage(UAnimMontage* Montage) {
}

void UHbkEnemyAttackInfoComponent::PerformAttack2(const FHbkEnemyAttackAnimInfo& AnimInfo) {
}

void UHbkEnemyAttackInfoComponent::PerformAttack(const FHbkEnemyAttackInfo& attackInfo) {
}

void UHbkEnemyAttackInfoComponent::OnRep_AttackAnimRepParam() {
}

void UHbkEnemyAttackInfoComponent::OnRep_AnimSectionRepParam() {
}

bool UHbkEnemyAttackInfoComponent::IsMatchLastAttackTag(FGameplayTag CheckAttackTag) const {
    return false;
}

bool UHbkEnemyAttackInfoComponent::GetOtherAttackInfo(int32 Index, FHbkEnemyAttackInfo& attackInfo) {
    return false;
}

EHbkAttackRangeType UHbkEnemyAttackInfoComponent::GetDefaultBattleRange() const {
    return EHbkAttackRangeType::Range_None;
}

FGameplayTag UHbkEnemyAttackInfoComponent::GetCurrentAttackTypeTag() const {
    return FGameplayTag{};
}

bool UHbkEnemyAttackInfoComponent::GetCurrentAttackInfo(FHbkEnemyAttackInfo& OutAttackInfo) const {
    return false;
}

FGameplayTag UHbkEnemyAttackInfoComponent::GetCurrentAttackAnimTag() const {
    return FGameplayTag{};
}

EHbkAttackRangeType UHbkEnemyAttackInfoComponent::GetAttackRangeFromDist(float DistanceToTarget) {
    return EHbkAttackRangeType::Range_None;
}

bool UHbkEnemyAttackInfoComponent::GetAttackInfoFromRange(EHbkAttackRangeType RangeType, FHbkEnemyAttackInfo& OutAttackInfo) {
    return false;
}

bool UHbkEnemyAttackInfoComponent::GetAttackBasicInfo(FGameplayTag AttackNameTag, FHbkEnemyAttackBasicInfo& attackInfo) {
    return false;
}

void UHbkEnemyAttackInfoComponent::ChangeMontageSection(FName SectionName, bool JumpTo) {
}

void UHbkEnemyAttackInfoComponent::ChangeAttackInfoList(int32 Index) {
}

void UHbkEnemyAttackInfoComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHbkEnemyAttackInfoComponent, AttackAnimRepParam);
    DOREPLIFETIME(UHbkEnemyAttackInfoComponent, AnimSectionRepParam);
}


