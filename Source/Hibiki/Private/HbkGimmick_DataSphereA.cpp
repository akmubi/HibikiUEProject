#include "HbkGimmick_DataSphereA.h"

AHbkGimmick_DataSphereA::AHbkGimmick_DataSphereA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bSaved = false;
    this->bActive = false;
    this->bSentEnergy.AddDefaulted(3);
}

int32 AHbkGimmick_DataSphereA::GetNumActivate() const {
    return 0;
}


