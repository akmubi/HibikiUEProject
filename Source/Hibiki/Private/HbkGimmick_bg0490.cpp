#include "HbkGimmick_bg0490.h"

AHbkGimmick_bg0490::AHbkGimmick_bg0490(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bMoved = false;
    this->DelayNote = 0;
    this->MoveNote = 1;
    this->IsArmVertical = false;
    this->ArmsDegree = 10.00f;
    this->HoldActorAdjuster = 0.00f;
}


