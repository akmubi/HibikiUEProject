#include "HbkGameAgentComponent.h"

UHbkGameAgentComponent::UHbkGameAgentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UHbkGameAgentComponent::StopSlotAnimation(float InBlendOutTime) {
}

void UHbkGameAgentComponent::SetSlotAnimationPlayRate(UAnimSequenceBase* Anim, float NewPlayRate) {
}

void UHbkGameAgentComponent::SetNextSectionSlotAnimation(FName SectionNameToChange, FName NextSection) {
}

void UHbkGameAgentComponent::PlaySlotAnimation(UAnimSequenceBase* Anim, FName StartSection) {
}

bool UHbkGameAgentComponent::IsHaveTag(const FString& ReceiveTag) const {
    return false;
}

bool UHbkGameAgentComponent::IsHaveCallSign(const FString& ReceiveCallSign) const {
    return false;
}


