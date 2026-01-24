#include "HbkGimmick_RobotArm.h"

AHbkGimmick_RobotArm::AHbkGimmick_RobotArm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->RobotArmRail = NULL;
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn2;
}

void AHbkGimmick_RobotArm::TransitionStateStart() {
}

void AHbkGimmick_RobotArm::TransitionStateEnd() {
}

void AHbkGimmick_RobotArm::TransitionStateBootup() {
}

bool AHbkGimmick_RobotArm::IsAnimMaintenance() const {
    return false;
}

bool AHbkGimmick_RobotArm::IsAnimActive() const {
    return false;
}


