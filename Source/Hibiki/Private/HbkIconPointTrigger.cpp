#include "HbkIconPointTrigger.h"
#include "Components/TextRenderComponent.h"

AHbkIconPointTrigger::AHbkIconPointTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bExecSave = false;
    this->bBeginOverlapDoOnce = false;
    this->TextComp = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextComp"));
    this->VisibleDistance = 1000.00f;
    this->TextComp->SetupAttachment(RootComponent);
}


