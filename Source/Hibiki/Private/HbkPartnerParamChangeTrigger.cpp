#include "HbkPartnerParamChangeTrigger.h"
#include "Components/TextRenderComponent.h"

AHbkPartnerParamChangeTrigger::AHbkPartnerParamChangeTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bExecSave = false;
    this->bBeginOverlapDoOnce = false;
    this->TextComp = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextComp"));
    this->TextComp->SetupAttachment(RootComponent);
}


