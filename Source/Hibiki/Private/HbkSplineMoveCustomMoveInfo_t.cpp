#include "HbkSplineMoveCustomMoveInfo_t.h"

FHbkSplineMoveCustomMoveInfo_t::FHbkSplineMoveCustomMoveInfo_t() {
    this->moveInOneBeat = false;
    this->rotate = false;
    this->midiMove = false;
    this->NoteType = EHbkNote::None;
    this->moveBeatCount = 0;
    this->waitBeatCount = 0;
    this->delayBeatCount = 0;
}

