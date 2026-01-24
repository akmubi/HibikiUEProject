#include "HbkGimmick_AtriumElevator.h"

AHbkGimmick_AtriumElevator::AHbkGimmick_AtriumElevator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FloorNum = 3;
    this->FloorHeight = 1000.00f;
    this->MoveNote = 1;
    this->StopFloorNote = 1;
}


