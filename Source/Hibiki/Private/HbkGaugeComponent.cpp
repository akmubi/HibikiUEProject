#include "HbkGaugeComponent.h"

UHbkGaugeComponent::UHbkGaugeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GaugeNumMax = 10;
    this->GaugeCapacity = 10.00f;
    this->InitAccumulatedGauge = 30.00f;
    this->AutoAccumulateTime = 3.00f;
}

float UHbkGaugeComponent::GetInitAccumulatedGauge() const {
    return 0.0f;
}

int32 UHbkGaugeComponent::GetGaugeMax() const {
    return 0;
}

float UHbkGaugeComponent::GetAccumulatedGaugeValue() const {
    return 0.0f;
}

float UHbkGaugeComponent::GetAccumulatedGaugeRate(int32 GaugeIndex) const {
    return 0.0f;
}

int32 UHbkGaugeComponent::GetAccumulatedGaugeCount() const {
    return 0;
}

void UHbkGaugeComponent::AccumulateGaugeValue(float AddValue) {
}

void UHbkGaugeComponent::AccumulateGauge(int32 AddNum) {
}


