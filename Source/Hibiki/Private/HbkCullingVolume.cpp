#include "HbkCullingVolume.h"
#include "HbkGameAgentComponent.h"

AHbkCullingVolume::AHbkCullingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->bActive = false;
}


