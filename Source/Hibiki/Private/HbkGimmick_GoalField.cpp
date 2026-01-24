#include "HbkGimmick_GoalField.h"

AHbkGimmick_GoalField::AHbkGimmick_GoalField(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bDown = false;
}


