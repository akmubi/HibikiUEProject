#include "HbkGimmick_bg1240.h"

AHbkGimmick_bg1240::AHbkGimmick_bg1240(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->Type = EHbkGimmick_bg1240Type::Height000;
    this->bActive = false;
    this->ProgressCounter = 0;
    this->MeshComp = NULL;
}



