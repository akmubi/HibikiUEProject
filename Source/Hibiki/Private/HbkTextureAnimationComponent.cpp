#include "HbkTextureAnimationComponent.h"

UHbkTextureAnimationComponent::UHbkTextureAnimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->bSaveType = EHbkTextureAnimation_SaveType::TAS_NONE;
    this->bSaveExtIntValue = 0;
}

void UHbkTextureAnimationComponent::OnWholeEvent_TAComp(int32 Count, bool bDownBeat) {
}

void UHbkTextureAnimationComponent::OnHalfEvent_TAComp(int32 Count, bool bDownBeat) {
}

void UHbkTextureAnimationComponent::OnGimmickComponentEndBattle() {
}

void UHbkTextureAnimationComponent::OnGimmickComponentDeactivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkTextureAnimationComponent::OnGimmickComponentDeactivate(AActor* Activator) {
}

void UHbkTextureAnimationComponent::OnGimmickComponentBeginBattle() {
}

void UHbkTextureAnimationComponent::OnGimmickComponentActivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkTextureAnimationComponent::OnGimmickComponentActivate(AActor* Activator) {
}

void UHbkTextureAnimationComponent::OnBeatEvent_TAComp(int32 Count, bool bDownBeat) {
}

void UHbkTextureAnimationComponent::On8thEvent_TAComp(int32 Count, bool bDownBeat) {
}

void UHbkTextureAnimationComponent::On16thEvent_TAComp(int32 Count, bool bDownBeat) {
}


