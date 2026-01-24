#include "HibikiVS_StreamingGameMode.h"
#include "HbkPlayerCharacter.h"

AHibikiVS_StreamingGameMode::AHibikiVS_StreamingGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultPawnClass = AHbkPlayerCharacter::StaticClass();
    this->ViewerPawnClass = NULL;
    this->ViewerControllerClass = NULL;
    this->ViewerHudClass = NULL;
}


