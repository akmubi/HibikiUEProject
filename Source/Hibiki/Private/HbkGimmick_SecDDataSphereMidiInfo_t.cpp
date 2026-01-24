#include "HbkGimmick_SecDDataSphereMidiInfo_t.h"

FHbkGimmick_SecDDataSphereMidiInfo_t::FHbkGimmick_SecDDataSphereMidiInfo_t() {
    this->Start = false;
    this->Success = false;
    this->MIDINoteType = EHbkMIDINoteType::None;
    this->MidiSubNo = 0;
    this->pMidiSE = NULL;
    this->pMidiVFX = NULL;
}

