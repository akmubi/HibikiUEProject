#include "HbkGimmick_CircuitBoard.h"

AHbkGimmick_CircuitBoard::AHbkGimmick_CircuitBoard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->LaserClass = NULL;
    this->pGameEnvTask = NULL;
    this->pCircuitMesh = NULL;
    this->pRightIronFrameMesh = NULL;
    this->pRightIronFrameAk = NULL;
    this->pLeftIronFrameMesh = NULL;
    this->pLeftIronFrameAk = NULL;
    this->pFenceMesh = NULL;
    this->pFenceAk = NULL;
}

void AHbkGimmick_CircuitBoard::StartMIDIEvent_CircuitBoard(int32 NoteNo, int32 Velocity) {
}

void AHbkGimmick_CircuitBoard::OpenFence() {
}

void AHbkGimmick_CircuitBoard::OnWholeEvent_CircuitBoard(int32 Count, bool bDownBeat) {
}

void AHbkGimmick_CircuitBoard::OnSyncUserCue(const FString& UserCue) {
}

void AHbkGimmick_CircuitBoard::OnHalfBeatEvent_CircuitBoard(int32 Count, bool bDownBeat) {
}

void AHbkGimmick_CircuitBoard::OnBeatEvent_CircuitBoard(int32 Count, bool bDownBeat) {
}

void AHbkGimmick_CircuitBoard::On8thBeatEvent_CircuitBoard(int32 Count, bool bDownBeat) {
}

void AHbkGimmick_CircuitBoard::On16thBeatEvent_CircuitBoard(int32 Count, bool bDownBeat) {
}

void AHbkGimmick_CircuitBoard::LaserMIDINoteOnEvent_CircuitBoard(int32 NoteNo, int32 Velocity) {
}

void AHbkGimmick_CircuitBoard::LaserMIDINoteOffEvent_CircuitBoard(int32 NoteNo, int32 Velocity) {
}

void AHbkGimmick_CircuitBoard::CloseFence() {
}


