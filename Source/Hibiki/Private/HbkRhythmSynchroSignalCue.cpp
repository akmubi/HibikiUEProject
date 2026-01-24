#include "HbkRhythmSynchroSignalCue.h"

FHbkRhythmSynchroSignalCue::FHbkRhythmSynchroSignalCue() {
    this->IsValid = false;
    this->IsSignal = false;
    this->NoteNo = 0;
    this->Velocity = 0;
    this->SignalDeltaTime = 0.00f;
    this->ResponseDeltaTime = 0.00f;
}

