#include "HbkGimmick_GiantRobotC.h"

AHbkGimmick_GiantRobotC::AHbkGimmick_GiantRobotC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeamActor = NULL;
    this->LoopCameraShakeTask = NULL;
}

void AHbkGimmick_GiantRobotC::OnStartGameOver() {
}

float AHbkGimmick_GiantRobotC::GetCanonRangeRate(float DeltaTime, float InterpSpeed) {
    return 0.0f;
}

EHbkGimmick_GiantRobotCAnimState AHbkGimmick_GiantRobotC::GetAnimState() const {
    return EHbkGimmick_GiantRobotCAnimState::None;
}


