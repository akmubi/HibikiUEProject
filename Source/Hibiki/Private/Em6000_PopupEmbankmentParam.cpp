#include "Em6000_PopupEmbankmentParam.h"

FEm6000_PopupEmbankmentParam::FEm6000_PopupEmbankmentParam() {
    this->WaitNote = EHbkNote::None;
    this->WaitNoteCount = 0;
    this->bIsAdjust = false;
    this->bIsRestartPoint = false;
    this->StartMoveLocation = FVector(0.0f);
}

