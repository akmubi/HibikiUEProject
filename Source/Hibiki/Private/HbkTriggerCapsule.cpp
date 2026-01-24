#include "HbkTriggerCapsule.h"
#include "HbkGameAgentComponent.h"
#include "HbkOverlapEventLinkComponent.h"

AHbkTriggerCapsule::AHbkTriggerCapsule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->AutoActivate = true;
    this->bExecSave = true;
    this->bBeginOverlapDoOnce = true;
    this->bEndOverlapDoOnce = false;
    this->bDoOnceSave = false;
    this->bSaveType = EHbkTriggerCapsule_SaveType::HBKTRGCPS_NONE;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->OverlapEventLinkComp = CreateDefaultSubobject<UHbkOverlapEventLinkComponent>(TEXT("LinkTriggerVolumeComponent"));
}


