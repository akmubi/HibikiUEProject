#include "HbkTalkTrigger.h"

AHbkTalkTrigger::AHbkTalkTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
}

void AHbkTalkTrigger::TalkEnded(const FHbkTalkContext TalkContext) {
}

void AHbkTalkTrigger::SubWaitTimer(int32 SubNoteCount, float SubTime) {
}

void AHbkTalkTrigger::SetWaitTimer(bool bUseNote, EHbkNote NoteType, int32 NoteCount, float Time) {
}

void AHbkTalkTrigger::AddWaitTimer(int32 AddNoteCount, float AddTime) {
}


