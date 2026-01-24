#include "HbkBlockingVolumeBase.h"
#include "HbkGameAgentComponent.h"

AHbkBlockingVolumeBase::AHbkBlockingVolumeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->AutoActivate = true;
    this->bExecSave = true;
    this->bSaveType = EHbkBlockingVolume_SaveType::HBKBVOL_NONE;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
}


