#include "HbkPlayerCameraChangeTrigger.h"
#include "HbkPlayerCameraChangeComponent.h"

AHbkPlayerCameraChangeTrigger::AHbkPlayerCameraChangeTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bExecSave = false;
    this->bBeginOverlapDoOnce = false;
    this->PlayerCameraChangeComp = CreateDefaultSubobject<UHbkPlayerCameraChangeComponent>(TEXT("PlayerCameraChange"));
}


