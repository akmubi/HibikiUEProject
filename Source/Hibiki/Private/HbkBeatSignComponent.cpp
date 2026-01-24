#include "HbkBeatSignComponent.h"

UHbkBeatSignComponent::UHbkBeatSignComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UHbkBeatSignComponent::SetParamMaterial(UMaterialInstanceDynamic* Material, int32 ParamIndex) {
}

void UHbkBeatSignComponent::OnBeatSignEvent(int32 NoteCount) {
}

bool UHbkBeatSignComponent::IsActiveBeatSign(int32 ArrayIndex) const {
    return false;
}

FBeatSignParam UHbkBeatSignComponent::GetBeatSignParam(int32 Index) {
    return FBeatSignParam{};
}

void UHbkBeatSignComponent::DeactivateBeatSign(int32 ArrayIndex) {
}

void UHbkBeatSignComponent::ActivateBeatSign(int32 ArrayIndex) {
}


