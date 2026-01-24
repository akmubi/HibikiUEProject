#include "HbkVisibilityVolume.h"
#include "HbkGameAgentComponent.h"

AHbkVisibilityVolume::AHbkVisibilityVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bAutoActivate = true;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->ActiveState = -1;
}


