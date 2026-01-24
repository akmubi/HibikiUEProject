#include "HbkPlayerGaugeComponent.h"

UHbkPlayerGaugeComponent::UHbkPlayerGaugeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UHbkPlayerGaugeComponent::UsePartnerGauge(EHbkPartnerType Type, int32 RecastBeatCount) {
}

void UHbkPlayerGaugeComponent::SetRevrebGaugeRate(const TArray<FString>& Args) {
}

void UHbkPlayerGaugeComponent::SetCurrentHealthRate(const TArray<FString>& Args) {
}

bool UHbkPlayerGaugeComponent::IsUsablePartner(EHbkPartnerType Type) const {
    return false;
}

bool UHbkPlayerGaugeComponent::IsEnoughGaugeAccumulated(int32 Cost) const {
    return false;
}

float UHbkPlayerGaugeComponent::GetPartnerGaugeRate(EHbkPartnerType Type) const {
    return 0.0f;
}

bool UHbkPlayerGaugeComponent::GetPartnerGaugeInfo(EHbkPartnerType Type, FHbkPartnerGaugeInfo& GaugeInfo) {
    return false;
}

int32 UHbkPlayerGaugeComponent::GetOverChargeCurrentStockMax() const {
    return 0;
}

int32 UHbkPlayerGaugeComponent::GetOverChargeCurrentStockCount() const {
    return 0;
}

int32 UHbkPlayerGaugeComponent::GetGaugeMax() const {
    return 0;
}

float UHbkPlayerGaugeComponent::GetGaugeCapacity() const {
    return 0.0f;
}

float UHbkPlayerGaugeComponent::GetAccumulatedGaugeValue() const {
    return 0.0f;
}

float UHbkPlayerGaugeComponent::GetAccumulatedGaugeRate(int32 GaugeIndex) const {
    return 0.0f;
}

int32 UHbkPlayerGaugeComponent::GetAccumulatedGaugeCount() const {
    return 0;
}

void UHbkPlayerGaugeComponent::AddOverchargeStockNum() {
}

void UHbkPlayerGaugeComponent::AddOverchargeNum() {
}

void UHbkPlayerGaugeComponent::AccumulateGaugeValue(float AddValue) {
}

void UHbkPlayerGaugeComponent::AccumulateGauge(int32 AddNum) {
}


