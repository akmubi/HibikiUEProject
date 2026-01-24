#include "HbkGimmick_RobotArmRailMovement.h"

FHbkGimmick_RobotArmRailMovement::FHbkGimmick_RobotArmRailMovement() {
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->NumSplineDiv = 0;
    this->ShiftLayout = 0.00f;
    this->StartNoteCount = 0;
    this->BootupDelayCount = 0;
    this->MoveCount = 0;
    this->StayCount = 0;
    this->MaintenancePoint = 0;
    this->MaintenanceBootupCount = 0;
    this->MaintenanceStartCount = 0;
    this->MaintenanceLoopCount = 0;
}

