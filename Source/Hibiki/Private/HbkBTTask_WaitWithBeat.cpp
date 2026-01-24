#include "HbkBTTask_WaitWithBeat.h"

UHbkBTTask_WaitWithBeat::UHbkBTTask_WaitWithBeat() {
    this->NodeName = TEXT("Wait with Beat");
    this->ActorOwner = NULL;
    this->RSComponent = NULL;
    this->NoteType = EHbkNote::Note_Quarter;
    this->WaitNoteCount = 1;
    this->SyncBeat = false;
}

void UHbkBTTask_WaitWithBeat::OnBeatEvent(int32 NoteCount) {
}

void UHbkBTTask_WaitWithBeat::FinishExecute(bool bSuccess) {
}


