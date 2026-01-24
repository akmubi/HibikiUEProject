#include "HbkTriggerSphere.h"
#include "HbkGameAgentComponent.h"
#include "HbkOverlapEventLinkComponent.h"

AHbkTriggerSphere::AHbkTriggerSphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->AutoActivate = true;
    this->bExecSave = true;
    this->bBeginOverlapDoOnce = true;
    this->bEndOverlapDoOnce = false;
    this->bSaveType = EHbkTriggerSphere_SaveType::HBKTRGSPH_NONE;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->OverlapEventLinkComp = CreateDefaultSubobject<UHbkOverlapEventLinkComponent>(TEXT("LinkTriggerVolumeComponent"));
}


