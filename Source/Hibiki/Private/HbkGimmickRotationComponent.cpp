#include "HbkGimmickRotationComponent.h"

UHbkGimmickRotationComponent::UHbkGimmickRotationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->ParamType = EHbkGimmickRotationParamType::None;
    this->ParamExtIntValue = 0;
}

void UHbkGimmickRotationComponent::ResetAllRotationComponent(const UObject* WorldContextObject) {
}

void UHbkGimmickRotationComponent::OnNoteWhole(int32 NoteCount, bool bDownBeat) {
}

void UHbkGimmickRotationComponent::OnNoteQuarter(int32 NoteCount, bool bDownBeat) {
}

void UHbkGimmickRotationComponent::OnNoteHalf(int32 NoteCount, bool bDownBeat) {
}

void UHbkGimmickRotationComponent::OnNote8th(int32 NoteCount, bool bDownBeat) {
}

void UHbkGimmickRotationComponent::OnNote16th(int32 NoteCount, bool bDownBeat) {
}

void UHbkGimmickRotationComponent::OnGimmickResumeAnim(AActor* Activator, bool bImmidiate) {
}

void UHbkGimmickRotationComponent::OnGimmickPauseAnim(AActor* Activator, bool bImmidiate) {
}

void UHbkGimmickRotationComponent::OnEndBattle() {
}

void UHbkGimmickRotationComponent::OnDeactivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkGimmickRotationComponent::OnDeactivate(AActor* Activator) {
}

void UHbkGimmickRotationComponent::OnBeginBattle() {
}

void UHbkGimmickRotationComponent::OnActivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkGimmickRotationComponent::OnActivate(AActor* Activator) {
}


