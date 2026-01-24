#include "HbkGimmickVfxComponent.h"

UHbkGimmickVfxComponent::UHbkGimmickVfxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SyncMusicId = -1;
    this->SyncBeatNote = EHbkNote::Note_Quarter;
    this->SyncBeatCount = 0;
    this->SyncLoopBarCount = 1;
    this->SyncBPMPlayRate = false;
    this->TranslucentSortPriority = EHbkTranslucentLayer::Default;
    this->DefaultPlayMode = EHbkGimmickVfxPlayMode::FirstTimeOnly;
    this->DefaultVFX = NULL;
    this->DefaultSFX = NULL;
    this->OnActivatePlayMode = EHbkGimmickVfxPlayMode::FirstTimeOnly;
    this->ActivateVFXDeactivateWhenDeactivated = false;
    this->KillWhenDeactivated = false;
    this->OnActivateVFX = NULL;
    this->OnActivateSFX = NULL;
    this->SplineMovePlayMode = EHbkGimmickVfxPlayMode::FirstTimeOnly;
    this->SplineMoveStartVFX = NULL;
    this->SplineMoveEndVFX = NULL;
}

void UHbkGimmickVfxComponent::UnRegisterEventInRSS() {
}

bool UHbkGimmickVfxComponent::RegisterEventInRSS(EHbkNote NoteType, int32 LoopCount) {
    return false;
}

void UHbkGimmickVfxComponent::ReceiveSplineMoveStart() {
}

void UHbkGimmickVfxComponent::ReceiveSplineMovePoint(int32 PointIndex) {
}

void UHbkGimmickVfxComponent::ReceiveSplineMoveEnd() {
}

void UHbkGimmickVfxComponent::ReceiveDeactivateGimmickExtInt(AActor* InActivator, int32 Value) {
}

void UHbkGimmickVfxComponent::ReceiveDeactivateGimmick(AActor* InActivator) {
}

void UHbkGimmickVfxComponent::ReceiveBeatEvent(const int32 Count) {
}

void UHbkGimmickVfxComponent::ReceiveActivateGimmickExtInt(AActor* InActivator, int32 Value) {
}

void UHbkGimmickVfxComponent::ReceiveActivateGimmick(AActor* InActivator) {
}

void UHbkGimmickVfxComponent::OnSyncNote8(int32 NoteCount, bool bOnBeat) {
}

void UHbkGimmickVfxComponent::OnSyncNote4(int32 NoteCount, bool bOnBeat) {
}

void UHbkGimmickVfxComponent::OnSyncNote2(int32 NoteCount, bool bOnBeat) {
}

void UHbkGimmickVfxComponent::OnSyncNote16(int32 NoteCount, bool bOnBeat) {
}

void UHbkGimmickVfxComponent::OnSyncNote1(int32 NoteCount, bool bOnBeat) {
}

void UHbkGimmickVfxComponent::OnPlayingMusic(int32 MusicId) {
}

void UHbkGimmickVfxComponent::CopyGimmickVfxComp(AActor* pActor) {
}


