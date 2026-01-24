#include "HbkGimmick_Stalactite.h"

AHbkGimmick_Stalactite::AHbkGimmick_Stalactite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bFallen = false;
}


