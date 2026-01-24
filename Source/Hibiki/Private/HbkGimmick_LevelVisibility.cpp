#include "HbkGimmick_LevelVisibility.h"

AHbkGimmick_LevelVisibility::AHbkGimmick_LevelVisibility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->ActivateType = FHbkGimmick_LevelVisibilityActivateType::None;
    this->ExtIntValue = 0;
}


