#include "HbkGameplayTask_AgentTagActivate.h"

UHbkGameplayTask_AgentTagActivate::UHbkGameplayTask_AgentTagActivate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UHbkGameplayTask_AgentTagActivate* UHbkGameplayTask_AgentTagActivate::OnActivateExtIntAgentTag(UObject* WorldContextObject, FGameplayTagContainer Tag, FName callSign, int32 Value, FGameplayTagContainer deTag, FName deCallSign, int32 deValue, EHbkNote SyncNote, int32 WaitNoteCount) {
    return NULL;
}

UHbkGameplayTask_AgentTagActivate* UHbkGameplayTask_AgentTagActivate::OnActivateAgentTag(UObject* WorldContextObject, FGameplayTagContainer Tag, FName callSign, FGameplayTagContainer deTag, FName deCallSign, EHbkNote SyncNote, int32 WaitNoteCount) {
    return NULL;
}

void UHbkGameplayTask_AgentTagActivate::NoteEventWhole_ActivateTagControl(int32 l_NoteCount, bool bDownBeat) {
}

void UHbkGameplayTask_AgentTagActivate::NoteEventQuarter_ActivateTagControl(int32 l_NoteCount, bool bDownBeat) {
}

void UHbkGameplayTask_AgentTagActivate::NoteEventHalf_ActivateTagControl(int32 l_NoteCount, bool bDownBeat) {
}

void UHbkGameplayTask_AgentTagActivate::NoteEvent8th_ActivateTagControl(int32 l_NoteCount, bool bDownBeat) {
}

void UHbkGameplayTask_AgentTagActivate::NoteEvent16th_ActivateTagControl(int32 l_NoteCount, bool bDownBeat) {
}


