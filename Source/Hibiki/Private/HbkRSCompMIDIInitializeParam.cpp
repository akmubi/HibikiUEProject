#include "HbkRSCompMIDIInitializeParam.h"

FHbkRSCompMIDIInitializeParam::FHbkRSCompMIDIInitializeParam() {
    this->EventType = EHbkMIDIEvent::None;
    this->NoteNo = 0;
    this->bEndless = false;
}

