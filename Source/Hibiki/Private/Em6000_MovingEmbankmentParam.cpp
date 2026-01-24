#include "Em6000_MovingEmbankmentParam.h"

FEm6000_MovingEmbankmentParam::FEm6000_MovingEmbankmentParam() {
    this->WaitNote = EHbkNote::None;
    this->WaitNoteCount = 0;
    this->bIsAdjust = false;
    this->StartMoveLocation = FVector(0.0f);
}

