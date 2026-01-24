#include "HbkAnimNotifyState_MoveToDirectionWithBeat.h"

UHbkAnimNotifyState_MoveToDirectionWithBeat::UHbkAnimNotifyState_MoveToDirectionWithBeat() {
    this->NoteType = EHbkNote::Note_Quarter;
    this->NoteCount = 1;
    this->bIsMoveDirectionToTargetLocation = false;
    this->CheckLength = 1000.00f;
    this->CheckTraceChannel = ECC_Camera;
    this->AdditiveLength = 0.00f;
    this->MoveCurveAsset = NULL;
    this->bIsDebugDraw = false;
}


