#include "HbkGameplayTask_AgentTagDeactivate.h"

UHbkGameplayTask_AgentTagDeactivate::UHbkGameplayTask_AgentTagDeactivate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UHbkGameplayTask_AgentTagDeactivate* UHbkGameplayTask_AgentTagDeactivate::OnDeactivateExtIntAgentTag(UObject* WorldContextObject, FGameplayTagContainer Tag, FName callSign, int32 Value, FGameplayTagContainer ActTag, FName ActCallSign, int32 ActValue, EHbkNote SyncNote, int32 WaitNoteCount) {
    return NULL;
}

UHbkGameplayTask_AgentTagDeactivate* UHbkGameplayTask_AgentTagDeactivate::OnDeactivateAgentTag(UObject* WorldContextObject, FGameplayTagContainer Tag, FName callSign, FGameplayTagContainer ActTag, FName ActCallSign, EHbkNote SyncNote, int32 WaitNoteCount) {
    return NULL;
}

void UHbkGameplayTask_AgentTagDeactivate::NoteEventWhole_DectivateTagControl(int32 l_NoteCount, bool bDownBeat) {
}

void UHbkGameplayTask_AgentTagDeactivate::NoteEventQuarter_DectivateTagControl(int32 l_NoteCount, bool bDownBeat) {
}

void UHbkGameplayTask_AgentTagDeactivate::NoteEventHalf_DectivateTagControl(int32 l_NoteCount, bool bDownBeat) {
}

void UHbkGameplayTask_AgentTagDeactivate::NoteEvent8th_DectivateTagControl(int32 l_NoteCount, bool bDownBeat) {
}

void UHbkGameplayTask_AgentTagDeactivate::NoteEvent16th_DectivateTagControl(int32 l_NoteCount, bool bDownBeat) {
}


