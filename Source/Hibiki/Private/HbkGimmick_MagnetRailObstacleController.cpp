#include "HbkGimmick_MagnetRailObstacleController.h"

AHbkGimmick_MagnetRailObstacleController::AHbkGimmick_MagnetRailObstacleController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineMagnet = NULL;
    this->Note = EHbkNote::Note_16th;
    this->BPM = 120.00f;
    this->StartNoteCount = 0;
    this->bStartHidden = false;
    this->ShowNoteCount = 0;
    this->IntervalNote = 4;
    this->QTEIntervalNote = 2;
    this->PlaySEIntervalNote = 2;
    this->ConsecutiveFailureNum = 3;
    this->AvoidWidgetShowTime = 10.00f;
    this->AvoidJustSeRef = NULL;
    this->bDebugShowRSSRecorder = false;
    this->bDebugInvalidDamage = false;
}


void AHbkGimmick_MagnetRailObstacleController::OnEndMoveSpline() {
}

void AHbkGimmick_MagnetRailObstacleController::OnBeginMoveSpline() {
}

float AHbkGimmick_MagnetRailObstacleController::GetDistanceAtNoteCount(int32 NoteCount, EHbkNote HbkNote) {
    return 0.0f;
}


