#include "HbkMultipleToughComponent.h"

UHbkMultipleToughComponent::UHbkMultipleToughComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MainIndex = 0;
    this->DisplayIndex = 0;
    this->bIsToughEnable = true;
    this->bIsToughRecoveryEnable = true;
    this->bIsToughRecoveryResetWhenAttacked = true;
}

void UHbkMultipleToughComponent::SetToughValueByScaleAll(float ToughValueMultiple) {
}

void UHbkMultipleToughComponent::SetToughValueByScale(int32 Index, float ToughValueMultiple) {
}

void UHbkMultipleToughComponent::SetToughValue(int32 Index, float ToughValue) {
}

void UHbkMultipleToughComponent::SetToughRecoveryEnable(bool Enable) {
}

void UHbkMultipleToughComponent::SetToughEnable(bool NewIsToughEnable) {
}

void UHbkMultipleToughComponent::SetMainIndex(int32 Index) {
}

void UHbkMultipleToughComponent::SetEnableNotifyDamage(int32 Index, bool Enable) {
}

void UHbkMultipleToughComponent::SetDisplayIndex(int32 Index) {
}

void UHbkMultipleToughComponent::RecoveryToughFull(int32 Index) {
}

void UHbkMultipleToughComponent::OnDamageAlive() {
}

bool UHbkMultipleToughComponent::IsToughRecoveryEnable() const {
    return false;
}

bool UHbkMultipleToughComponent::IsToughMain() const {
    return false;
}

bool UHbkMultipleToughComponent::IsToughEnable() const {
    return false;
}

bool UHbkMultipleToughComponent::IsTough(int32 Index) const {
    return false;
}

bool UHbkMultipleToughComponent::IsEnableNotifyDamage(int32 Index) const {
    return false;
}

void UHbkMultipleToughComponent::Initialize(const FHbkMultipleToughCompInitParam& InInitParam) {
}

FHbkMultipleToughParam UHbkMultipleToughComponent::GetToughParamForDisplay() const {
    return FHbkMultipleToughParam{};
}

FHbkMultipleToughParam UHbkMultipleToughComponent::GetToughParam(int32 Index) const {
    return FHbkMultipleToughParam{};
}

int32 UHbkMultipleToughComponent::GetMainIndex() const {
    return 0;
}

int32 UHbkMultipleToughComponent::GetDisplayIndex() const {
    return 0;
}

void UHbkMultipleToughComponent::ForceToughDisable(int32 Index) {
}

void UHbkMultipleToughComponent::ForceMainToughDisable() {
}

void UHbkMultipleToughComponent::AllRecoveryToughFull() {
}

void UHbkMultipleToughComponent::AllForceToughDisable() {
}


