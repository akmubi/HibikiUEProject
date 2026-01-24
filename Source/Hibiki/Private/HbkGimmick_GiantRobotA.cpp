#include "HbkGimmick_GiantRobotA.h"

AHbkGimmick_GiantRobotA::AHbkGimmick_GiantRobotA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeamActor = NULL;
    this->LoopCameraShakeTask = NULL;
}

void AHbkGimmick_GiantRobotA::SetStopAttack(bool bStop) {
}

void AHbkGimmick_GiantRobotA::SetStandbyNoteCount(int32 NoteCount) {
}

void AHbkGimmick_GiantRobotA::SetAimLocation(FVector Location) {
}

void AHbkGimmick_GiantRobotA::OnStartGameOver() {
}


void AHbkGimmick_GiantRobotA::MoveNextArea(FVector Location, AHbkGimmick_GiantRobotActualArea* ActualArea) {
}

float AHbkGimmick_GiantRobotA::GetCanonRangeRate(float DeltaTime, float InterpSpeed) {
    return 0.0f;
}

EHbkGimmick_GiantRobotAAnimState AHbkGimmick_GiantRobotA::GetAnimState() const {
    return EHbkGimmick_GiantRobotAAnimState::None;
}


