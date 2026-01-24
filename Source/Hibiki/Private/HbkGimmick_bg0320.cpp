#include "HbkGimmick_bg0320.h"

AHbkGimmick_bg0320::AHbkGimmick_bg0320(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->BreakStayClass = NULL;
    this->BrokenStayClass = NULL;
    this->pAlertSE = NULL;
    this->pFLSparkVFX = NULL;
    this->pFRSparkVFX = NULL;
    this->pBLSparkVFX = NULL;
    this->pBRSparkVFX = NULL;
}

void AHbkGimmick_bg0320::OnStartGameOver() {
}

void AHbkGimmick_bg0320::OnNoteEvent_bg0320_Lamp(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_bg0320::OnNoteEvent_bg0320(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_bg0320::OnBreak_BrakeFR() {
}

void AHbkGimmick_bg0320::OnBreak_BrakeFL() {
}

void AHbkGimmick_bg0320::OnBreak_BrakeBR() {
}

void AHbkGimmick_bg0320::OnBreak_BrakeBL() {
}

float AHbkGimmick_bg0320::GetTransformAlpha() {
    return 0.0f;
}

FRotator AHbkGimmick_bg0320::GetRollingRot() {
    return FRotator{};
}

float AHbkGimmick_bg0320::GetMonitorTransformAlpha() {
    return 0.0f;
}

void AHbkGimmick_bg0320::cs0554toInGameforVFX() {
}

void AHbkGimmick_bg0320::cs0554toInGameforLift() {
}


