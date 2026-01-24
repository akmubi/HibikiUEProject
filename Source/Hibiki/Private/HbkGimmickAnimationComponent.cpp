#include "HbkGimmickAnimationComponent.h"

UHbkGimmickAnimationComponent::UHbkGimmickAnimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UHbkGimmickAnimationComponent::OnNoteWhole_GimmickAnimationEvent(int32 NoteCount, bool bDownBeat) {
}

void UHbkGimmickAnimationComponent::OnNoteQuarter_GimmickAnimationEvent(int32 NoteCount, bool bDownBeat) {
}

void UHbkGimmickAnimationComponent::OnNoteHalf_GimmickAnimationEvent(int32 NoteCount, bool bDownBeat) {
}

void UHbkGimmickAnimationComponent::OnNote8th_GimmickAnimationEvent(int32 NoteCount, bool bDownBeat) {
}

void UHbkGimmickAnimationComponent::OnNote16th_GimmickAnimationEvent(int32 NoteCount, bool bDownBeat) {
}

void UHbkGimmickAnimationComponent::OnHitEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UHbkGimmickAnimationComponent::OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UHbkGimmickAnimationComponent::OnGimmickReturnCheckPoint(AActor* Activator, FName CPName) {
}

void UHbkGimmickAnimationComponent::OnGimmickResumeAnim(AActor* Activator, bool Immidiate) {
}

void UHbkGimmickAnimationComponent::OnGimmickPauseAnim(AActor* Activator, bool Immidiate) {
}

void UHbkGimmickAnimationComponent::OnGimmickEndBattle() {
}

void UHbkGimmickAnimationComponent::OnGimmickDeactivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkGimmickAnimationComponent::OnGimmickDeactivate(AActor* Activator) {
}

void UHbkGimmickAnimationComponent::OnGimmickBeginBattle() {
}

void UHbkGimmickAnimationComponent::OnGimmickActivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkGimmickAnimationComponent::OnGimmickActivate(AActor* Activator) {
}

void UHbkGimmickAnimationComponent::CopyGimmickAnimationComp(AActor* pActor) {
}


