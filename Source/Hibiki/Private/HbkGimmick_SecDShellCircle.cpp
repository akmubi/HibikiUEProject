#include "HbkGimmick_SecDShellCircle.h"

AHbkGimmick_SecDShellCircle::AHbkGimmick_SecDShellCircle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bSaveChaiRouteActivate = false;
    this->bSavePepperRouteSignDisappear = false;
    this->bSavePepperRouteActivate = false;
    this->bSaveMacaronRouteActivate = false;
    this->bSaveMacaronRouteSignDisappear = false;
    this->pDisappearSignSE = NULL;
    this->BattleScaleMove = false;
    this->pCenterMeshComp = NULL;
    this->pPepperClosedSignMeshComp = NULL;
    this->pMacaronClosedSignMeshComp = NULL;
}

void AHbkGimmick_SecDShellCircle::SetPeppermintRouteSignDisappearStart(float SpeedRate) {
}

void AHbkGimmick_SecDShellCircle::SetPeppermintRoute(bool Flag) {
}

void AHbkGimmick_SecDShellCircle::SetMacaronRouteSignDisappearStart(float sppedRate) {
}

void AHbkGimmick_SecDShellCircle::SetMacaronRoute(bool Flag) {
}

void AHbkGimmick_SecDShellCircle::SetChaiRoute(bool Flag) {
}

void AHbkGimmick_SecDShellCircle::OnNoteWhole_SecDShellCircle(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_SecDShellCircle::OnNoteQuarter_SecDShellCircle(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_SecDShellCircle::OnNoteHalf_SecDShellCircle(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_SecDShellCircle::OnNote8th_SecDShellCircle(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_SecDShellCircle::OnNote16th_SecDShellCircle(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_SecDShellCircle::OnEndBattle_SecDShellCircle() {
}

void AHbkGimmick_SecDShellCircle::OnCommonResourceSuccess() {
}

void AHbkGimmick_SecDShellCircle::OnBeginBattle_SecDShellCircle() {
}


