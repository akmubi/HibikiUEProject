#include "Em0600MoveParam.h"

FEm0600MoveParam::FEm0600MoveParam() {
    this->MoveLengthForwardMin = 0.00f;
    this->MoveLengthForwardMax = 0.00f;
    this->MoveLengthSideMax = 0.00f;
    this->MoveLengthHeightMax = 0.00f;
    this->MoveNoteType = EHbkNote::None;
    this->RestNoteCount = 0;
}

