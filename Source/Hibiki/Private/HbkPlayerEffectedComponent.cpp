#include "HbkPlayerEffectedComponent.h"

UHbkPlayerEffectedComponent::UHbkPlayerEffectedComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UHbkPlayerEffectedComponent::OnBurnDamageBeatEvent(int32 NoteCount) {
}

bool UHbkPlayerEffectedComponent::GetAccumulatedLifeTankRate(TArray<float>& RateList) const {
    return false;
}

int32 UHbkPlayerEffectedComponent::GetAccumulatedLifeTankCount() const {
    return 0;
}

void UHbkPlayerEffectedComponent::AddLifeTankPiece() {
}

void UHbkPlayerEffectedComponent::AddLifeTankNum() {
}

void UHbkPlayerEffectedComponent::AddChipSlotNum() {
}


