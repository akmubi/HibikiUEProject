#include "HbkGimmick_PipeFloor.h"

AHbkGimmick_PipeFloor::AHbkGimmick_PipeFloor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->MovePosCurve = NULL;
    this->Speed = 1.00f;
    this->pAnimationSE = NULL;
    this->pActivateVFX = NULL;
    this->NoteCountRate = 0.00f;
}


