#include "HbkGimmick_MagnetRailJumpRail.h"

AHbkGimmick_MagnetRailJumpRail::AHbkGimmick_MagnetRailJumpRail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UpdateSpline = false;
    this->JumpDistance = 0.00f;
    this->PreviousMagnet = NULL;
    this->NextMagnet = NULL;
}


