#include "HbkPlayLevelSequenceTask.h"

UHbkPlayLevelSequenceTask::UHbkPlayLevelSequenceTask() {
}

UHbkPlayLevelSequenceTask* UHbkPlayLevelSequenceTask::PlayLevelSequenceEX(UObject* WorldContextObject, AHbkLevelSequenceActor* LevelSequenceActor, EHbkActorBindingMethod AutoBindIngamePlayer, const TArray<FHbkLevelSequenceBindParam>& BindingOthers, bool bHideIngamePlayer) {
    return NULL;
}

UHbkPlayLevelSequenceTask* UHbkPlayLevelSequenceTask::PlayLevelSequence2(UObject* WorldContextObject, AHbkLevelSequenceActor* LevelSequenceActor, int32 StarFramePosition, float PlayRate, EHbkActorBindingMethod AutoBindIngamePlayer, bool bHideIngamePlayer, bool bIsEventSoonAfter) {
    return NULL;
}

UHbkPlayLevelSequenceTask* UHbkPlayLevelSequenceTask::PlayLevelSequence(UObject* WorldContextObject, AHbkLevelSequenceActor* LevelSequenceActor, EHbkActorBindingMethod AutoBindIngamePlayer, bool bHideIngamePlayer, UHbkPlayLvSeqOption* PlayOptionData, EHbkPlayLvSeqStartPos StartPos) {
    return NULL;
}

void UHbkPlayLevelSequenceTask::OnSyncInitialize() {
}

void UHbkPlayLevelSequenceTask::OnSkipToEndLevelSeq() {
}

void UHbkPlayLevelSequenceTask::OnPostStartedPlayingLevelSeq() {
}

void UHbkPlayLevelSequenceTask::OnLvSeqEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UHbkPlayLevelSequenceTask::OnLeaveMap() {
}

void UHbkPlayLevelSequenceTask::OnGameUnPuase() {
}

void UHbkPlayLevelSequenceTask::OnGamePuase() {
}

void UHbkPlayLevelSequenceTask::OnFinishedLevelSeq() {
}

void UHbkPlayLevelSequenceTask::OnActivatePreSync(int32 NoteCount, bool bDownBeat) {
}


