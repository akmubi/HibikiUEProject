#include "HbkGimmick_MovingFence.h"

AHbkGimmick_MovingFence::AHbkGimmick_MovingFence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bDown = false;
}


