#include "HbkPlayerRDGrowthComponent.h"

UHbkPlayerRDGrowthComponent::UHbkPlayerRDGrowthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UHbkPlayerRDGrowthComponent::HasGrowth(EHbkPlayerRDGrowthType GrowthType) const {
    return false;
}

void UHbkPlayerRDGrowthComponent::DebugAddGrowth(const TArray<FString>& Args) {
}


