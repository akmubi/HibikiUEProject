#include "HbkSolidVocalAnimInstance.h"

UHbkSolidVocalAnimInstance::UHbkSolidVocalAnimInstance() {
    this->bIsAdjustNextNote = false;
    this->AdjustNextNoteTime = 0.00f;
    this->BeginPlayRate = 0.00f;
}

void UHbkSolidVocalAnimInstance::SetAdjustBeat(EHbkNote NoteType, float MinTimeRate) {
}

void UHbkSolidVocalAnimInstance::ResetAdjustBeat() {
}


