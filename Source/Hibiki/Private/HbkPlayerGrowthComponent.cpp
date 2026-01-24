#include "HbkPlayerGrowthComponent.h"

UHbkPlayerGrowthComponent::UHbkPlayerGrowthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitHealthAmount = 70.00f;
    this->OneHealthGaugeAmountMax = 100.00f;
    this->InitGaugeCount = 2;
    this->HealthGrowthMaxNum = 13;
    this->HealthGrowthAmount = 10.00f;
    this->GaugeGrowthMaxNum = 6;
    this->GaugeGrowthAmount = 1;
}

float UHbkPlayerGrowthComponent::GetCurrentHealthGrowthRate() const {
    return 0.0f;
}

int32 UHbkPlayerGrowthComponent::GetCurrentHealthGrowthNum() const {
    return 0;
}

float UHbkPlayerGrowthComponent::GetCurrentHealthGrowthAmount() const {
    return 0.0f;
}

int32 UHbkPlayerGrowthComponent::GetCurrentGaugeGrowthAmount() const {
    return 0;
}

void UHbkPlayerGrowthComponent::AddHealthGrowthPieceItem() {
}

void UHbkPlayerGrowthComponent::AddHealthGrowthItem() {
}

void UHbkPlayerGrowthComponent::AddGaugeGrowthPieceItem() {
}

void UHbkPlayerGrowthComponent::AddGaugeGrowthItem() {
}


