#include "HbkBossSelectTagComponent.h"

UHbkBossSelectTagComponent::UHbkBossSelectTagComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelectTagInfoListAsset = NULL;
    this->RecordNum = 1;
    this->RecordIndex = 0;
    this->bIsReserveSelectedTag = false;
    this->bIsUseEvaluation = false;
    this->DifficultyType = EHbkDifficultyType::Normal;
    this->bIsPriorityGivenToReservedTagsWhenSelectingDebug = false;
}

void UHbkBossSelectTagComponent::SetRestrictTag(const FHbkBossSelectTagInfoRestrict& Restrict) {
}

void UHbkBossSelectTagComponent::SetReserveTag(const FHbkBossSelectTagInfoReserve& Reserve) {
}

void UHbkBossSelectTagComponent::SetOverrideSelectedTag(const FGameplayTag& OverrideTag) {
}

void UHbkBossSelectTagComponent::SetDifficultyType(EHbkDifficultyType Type) {
}

FGameplayTag UHbkBossSelectTagComponent::SelectTagToRange(int32 StateIndex, EHbkAttackRangeType RangeType) {
    return FGameplayTag{};
}

FGameplayTag UHbkBossSelectTagComponent::SelectTag(int32 StateIndex) {
    return FGameplayTag{};
}

void UHbkBossSelectTagComponent::PushInvalidRecordSelectTag() {
}

bool UHbkBossSelectTagComponent::IsReserveTag(int32 Count) {
    return false;
}

bool UHbkBossSelectTagComponent::IsReserveSelectedTag() {
    return false;
}

bool UHbkBossSelectTagComponent::IsBeforehandSelectedTag() const {
    return false;
}

FGameplayTag UHbkBossSelectTagComponent::GetSelectedTag() const {
    return FGameplayTag{};
}

void UHbkBossSelectTagComponent::GetReserveTagList(TArray<FGameplayTagContainer>& ReserveTagList) {
}

FGameplayTag UHbkBossSelectTagComponent::GetPrevSelectedTag() const {
    return FGameplayTag{};
}

FGameplayTag UHbkBossSelectTagComponent::GetBeforehandSelectedTag() {
    return FGameplayTag{};
}

void UHbkBossSelectTagComponent::ClearSelectedTag() {
}

void UHbkBossSelectTagComponent::ClearRestrictTag() {
}

void UHbkBossSelectTagComponent::ClearReserveTag(bool bIsForce) {
}

void UHbkBossSelectTagComponent::ClearRecordSelectTag() {
}

void UHbkBossSelectTagComponent::ClearDigestedRestrictTag() {
}

void UHbkBossSelectTagComponent::ClearDigestedReserveSelectedTag() {
}

void UHbkBossSelectTagComponent::ClearBeforehandSelectedTag() {
}

void UHbkBossSelectTagComponent::CancelReserveTag(const FGameplayTag& CancelTag, bool bIsForce) {
}

FGameplayTag UHbkBossSelectTagComponent::BeforehandSelectTag(int32 StateIndex) {
    return FGameplayTag{};
}


