#include "HbkGimmickFloorMoving.h"

AHbkGimmickFloorMoving::AHbkGimmickFloorMoving(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->MoveStepCount = 1;
    this->StayStepCount = 1;
    this->PointMoveNoteNum = 1;
    this->PointSplitCount = 0;
    this->bInitSync = false;
    this->bMoveOnePointOnActivate = false;
    this->bFinishOnEndPoint = false;
    this->bReverseLoop = true;
    this->bReverseOption = false;
    this->bIsMoveSideToSide = false;
    this->bIsApplyRotate = false;
    this->bAxisLockX = true;
    this->bAxisLockY = true;
    this->bAxisLockZ = false;
    this->bShowSplineIndex = false;
}




