#include "HbkGameplayTask_AgentTagShowHide.h"

UHbkGameplayTask_AgentTagShowHide::UHbkGameplayTask_AgentTagShowHide(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UHbkGameplayTask_AgentTagShowHide* UHbkGameplayTask_AgentTagShowHide::OnShowHideInGameAgentTag(UObject* WorldContextObject, FGameplayTagContainer ShowTag, FName ShowCallSign, FGameplayTagContainer HideTag, FName HideCallSign, EHbkNote SyncNote, int32 WaitNoteCount) {
    return NULL;
}

void UHbkGameplayTask_AgentTagShowHide::NoteEventWhole_ShowHideInGameTagControl(int32 l_NoteCount, bool bDownBeat) {
}

void UHbkGameplayTask_AgentTagShowHide::NoteEventQuarter_ShowHideInGameTagControl(int32 l_NoteCount, bool bDownBeat) {
}

void UHbkGameplayTask_AgentTagShowHide::NoteEventHalf_ShowHideInGameTagControl(int32 l_NoteCount, bool bDownBeat) {
}

void UHbkGameplayTask_AgentTagShowHide::NoteEvent8th_ShowHideInGameTagControl(int32 l_NoteCount, bool bDownBeat) {
}

void UHbkGameplayTask_AgentTagShowHide::NoteEvent16th_ShowHideInGameTagControl(int32 l_NoteCount, bool bDownBeat) {
}


