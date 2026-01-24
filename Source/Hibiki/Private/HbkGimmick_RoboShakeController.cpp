#include "HbkGimmick_RoboShakeController.h"

AHbkGimmick_RoboShakeController::AHbkGimmick_RoboShakeController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SaveRTPCType = EHbkGimmickRoboShakeRTPCType::None;
    this->FootStepComp = NULL;
}

void AHbkGimmick_RoboShakeController::OnNoteWhole_St11ShakeController(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_RoboShakeController::OnNoteQuarter_St11ShakeController(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_RoboShakeController::OnNoteHalf_St11ShakeController(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_RoboShakeController::OnNote8th_St11ShakeController(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_RoboShakeController::OnNote16th_St11ShakeController(int32 NoteCount, bool bDownBeat) {
}


