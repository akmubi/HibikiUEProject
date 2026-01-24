#include "HbkRhythmSynchroMIDISignalParam.h"

FHbkRhythmSynchroMIDISignalParam::FHbkRhythmSynchroMIDISignalParam() {
    this->NoteNo = 0;
    this->SignalNoteType = EHbkNote::None;
    this->SignalNoteCount = 0.00f;
    this->ResponseNoteType = EHbkNote::None;
    this->ResponseNoteCount = 0.00f;
}

