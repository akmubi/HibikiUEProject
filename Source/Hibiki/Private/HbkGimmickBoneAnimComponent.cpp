#include "HbkGimmickBoneAnimComponent.h"

UHbkGimmickBoneAnimComponent::UHbkGimmickBoneAnimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->ParamType = EHbkGimmickBoneAnimParamType::None;
    this->ParamExtIntValue = 0;
}

void UHbkGimmickBoneAnimComponent::OnReturnCheckPoint(AActor* Activator, FName CPName) {
}

void UHbkGimmickBoneAnimComponent::OnResumeAnim(AActor* Activator, bool Immidiate) {
}

void UHbkGimmickBoneAnimComponent::OnPauseAnim(AActor* Activator, bool Immidiate) {
}

void UHbkGimmickBoneAnimComponent::OnNoteWhole(int32 NoteCount, bool bDownBeat) {
}

void UHbkGimmickBoneAnimComponent::OnNoteQuarter(int32 NoteCount, bool bDownBeat) {
}

void UHbkGimmickBoneAnimComponent::OnNoteHalf(int32 NoteCount, bool bDownBeat) {
}

void UHbkGimmickBoneAnimComponent::OnNote8th(int32 NoteCount, bool bDownBeat) {
}

void UHbkGimmickBoneAnimComponent::OnNote16th(int32 NoteCount, bool bDownBeat) {
}

void UHbkGimmickBoneAnimComponent::OnHitEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UHbkGimmickBoneAnimComponent::OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UHbkGimmickBoneAnimComponent::OnEndBattle() {
}

void UHbkGimmickBoneAnimComponent::OnDeactivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkGimmickBoneAnimComponent::OnDeactivate(AActor* Activator) {
}

void UHbkGimmickBoneAnimComponent::OnBeginBattle() {
}

void UHbkGimmickBoneAnimComponent::OnActivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkGimmickBoneAnimComponent::OnActivate(AActor* Activator) {
}


