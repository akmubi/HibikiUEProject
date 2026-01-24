#include "HbkTalkSessionTask.h"

UHbkTalkSessionTask::UHbkTalkSessionTask() {
}

UHbkTalkSessionTask* UHbkTalkSessionTask::StartTalkSessionTask(UObject* WorldContextObject, UDataTable* TalkData, FName StartTalkRow, AActor* SessionOwner, bool bUnPlayable, bool bPauseRhythmMeter) {
    return NULL;
}

void UHbkTalkSessionTask::RecieveTalkNewLine(const FName NewLineName) {
}

void UHbkTalkSessionTask::RecieveTalkEnd(const FHbkTalkContext TalkContext) {
}

void UHbkTalkSessionTask::RecieveTalkCue(const FName TalkCueName) {
}

void UHbkTalkSessionTask::RecieveTalkCancelled(const FHbkTalkContext TalkContext) {
}

void UHbkTalkSessionTask::OnTalkSessionEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


