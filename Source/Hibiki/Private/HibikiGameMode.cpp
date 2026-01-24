#include "HibikiGameMode.h"
#include "HbkPlayerCharacter.h"

AHibikiGameMode::AHibikiGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultPawnClass = AHbkPlayerCharacter::StaticClass();
    this->AudioLoadCheckParamTable = NULL;
    this->bStageDataSaveEnabled = false;
}

void AHibikiGameMode::RequestFadeInUnLock(UObject* WorldContextObject) {
}

void AHibikiGameMode::RequestFadeInLock(UObject* WorldContextObject) {
}

bool AHibikiGameMode::IsBeginPlayStartWaiting(UObject* WorldContextObject) {
    return false;
}


