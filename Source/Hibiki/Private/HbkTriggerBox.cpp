#include "HbkTriggerBox.h"
#include "HbkGameAgentComponent.h"
#include "HbkOverlapEventLinkComponent.h"

AHbkTriggerBox::AHbkTriggerBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->AutoActivate = true;
    this->bExecSave = true;
    this->bBeginOverlapDoOnce = true;
    this->bEndOverlapDoOnce = false;
    this->bSaveType = EHbkTriggerBox_SaveType::HBKTRGBOX_NONE;
    this->CollisionProfileName = TEXT("NoCollision");
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->OverlapEventLinkComp = CreateDefaultSubobject<UHbkOverlapEventLinkComponent>(TEXT("LinkTriggerVolumeComponent"));
}

bool AHbkTriggerBox::IsActivate() const {
    return false;
}


