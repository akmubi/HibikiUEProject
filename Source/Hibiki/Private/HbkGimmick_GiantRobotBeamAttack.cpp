#include "HbkGimmick_GiantRobotBeamAttack.h"

FHbkGimmick_GiantRobotBeamAttack::FHbkGimmick_GiantRobotBeamAttack() {
    this->ContinuousHitTraceChannel = TraceTypeQuery1;
    this->DesiredDirectionAlpha = 0.00f;
    this->Location = FVector(0.0f);
    this->MinScale = FVector(0.0f);
    this->MaxScale = FVector(0.0f);
}

