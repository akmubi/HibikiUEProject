#include "HbkGimmick_SpectraUpdateRestart.h"

AHbkGimmick_SpectraUpdateRestart::AHbkGimmick_SpectraUpdateRestart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->LocationOffsetDistance = 250.00f;
    this->PermissionHeightDistance = 100.00f;
}


