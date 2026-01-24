#include "HbkGimmick_RhythmJump.h"

AHbkGimmick_RhythmJump::AHbkGimmick_RhythmJump(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bSaveState = EHbkGimmick_RhythmJump_SaveStateInfo_t::RJS_NONE;
    this->bNotActivateWhileLoading = false;
    this->ForceFeedbackEffect = NULL;
    this->pBootUpSE = NULL;
    this->pIdleSE = NULL;
    this->pBaseMesh = NULL;
    this->pFrameMesh = NULL;
    this->pDisplayMesh = NULL;
    this->pHologram00Mesh = NULL;
    this->pHologram01Mesh = NULL;
    this->pHologram02Mesh = NULL;
    this->pSpectrum01Mesh = NULL;
    this->pSpectrum02Mesh = NULL;
    this->pSpectrum03Mesh = NULL;
    this->pSpectrum04Mesh = NULL;
}

void AHbkGimmick_RhythmJump::Receive_OnRhythmJumpSuccessLastInput() {
}

void AHbkGimmick_RhythmJump::Receive_OnRhythmJumpSuccessInput(int32 JumpCount) {
}

void AHbkGimmick_RhythmJump::Receive_OnRhythmJumpReachedJumpApex() {
}

void AHbkGimmick_RhythmJump::Receive_OnRhythmJumpOverLandingHeight() {
}

void AHbkGimmick_RhythmJump::Receive_OnRhythmJumpFailed() {
}

void AHbkGimmick_RhythmJump::Receive_OnRhythmJumpEnd() {
}

void AHbkGimmick_RhythmJump::Receive_OnRhythmJumpBeginJump() {
}

void AHbkGimmick_RhythmJump::OnSyncHalfNoteEvent(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_RhythmJump::OnSyncBeatEvent(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_RhythmJump::OnSync8thEvent(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_RhythmJump::OnSync16thEvent(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_RhythmJump::OnEndStreamingLoading() {
}

void AHbkGimmick_RhythmJump::OnCommonResourceSuccess() {
}

void AHbkGimmick_RhythmJump::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHbkGimmick_RhythmJump::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkGimmick_RhythmJump::OnBeginStreamingLoading() {
}


