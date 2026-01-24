#include "HbkRepulsionComponent.h"

UHbkRepulsionComponent::UHbkRepulsionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoRegisterMan = false;
    this->WeightClass = EHbkRepilsionWeightClass::Middle;
    this->CoreDistance = 30.00f;
    this->PersonalDistance = 50.00f;
    this->HalfHeight = 40.00f;
}

void UHbkRepulsionComponent::SuspendRepulsionAgent() {
}

bool UHbkRepulsionComponent::SetRepulsionParamByPreset(const FName& PresetName) {
    return false;
}

void UHbkRepulsionComponent::SetRepulsionParam(const FHbkRepulsionPreset& CustomParam) {
}

void UHbkRepulsionComponent::ResumeRepulsionAgent() {
}


