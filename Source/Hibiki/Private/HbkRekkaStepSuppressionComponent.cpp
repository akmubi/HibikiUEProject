#include "HbkRekkaStepSuppressionComponent.h"

UHbkRekkaStepSuppressionComponent::UHbkRekkaStepSuppressionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StepSuppressionTime = 0.00f;
}

void UHbkRekkaStepSuppressionComponent::SetStepSuppressionTime(float Time) {
}

bool UHbkRekkaStepSuppressionComponent::IsStepPossible() const {
    return false;
}

void UHbkRekkaStepSuppressionComponent::ClearStepSuppressionTime() {
}


