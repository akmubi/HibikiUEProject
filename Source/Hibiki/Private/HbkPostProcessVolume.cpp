#include "HbkPostProcessVolume.h"
#include "HbkGameAgentComponent.h"
#include "HbkPostProcessVolumeGameComponent.h"

AHbkPostProcessVolume::AHbkPostProcessVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkPostProcessVolumeGameComponent>(TEXT("HbkPostProcessVolumeComponent"));
    this->Tags.AddDefaulted(1);
    this->HbkPostProcessVolumeComponent = (UHbkPostProcessVolumeGameComponent*)RootComponent;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->bSaveType = EHbkPostProcessVolume_SaveType::SAVE_NONE;
}


