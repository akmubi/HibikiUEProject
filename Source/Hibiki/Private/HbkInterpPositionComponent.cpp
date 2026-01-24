#include "HbkInterpPositionComponent.h"

UHbkInterpPositionComponent::UHbkInterpPositionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShortStepDistance = 175.00f;
}

void UHbkInterpPositionComponent::Receive_OnInterpPosEnded() {
}

void UHbkInterpPositionComponent::Receive_OnInterpPosAnimEnded(UAnimMontage* Montage, bool bInterrupted) {
}


