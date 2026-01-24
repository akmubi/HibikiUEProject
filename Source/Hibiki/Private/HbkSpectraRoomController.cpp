#include "HbkSpectraRoomController.h"
#include "HbkGameAgentComponent.h"

AHbkSpectraRoomController::AHbkSpectraRoomController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SettingsData = NULL;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->SpectraBattleController = NULL;
}

void AHbkSpectraRoomController::SpectraRoomLookEnding(UObject* WorldContextObject) {
}


