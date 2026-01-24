#include "HbkPlayerCameraChanger.h"
#include "HbkPlayerCameraChangeComponent.h"

AHbkPlayerCameraChanger::AHbkPlayerCameraChanger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraChangeComp = CreateDefaultSubobject<UHbkPlayerCameraChangeComponent>(TEXT("PlayerCameraChange"));
}


