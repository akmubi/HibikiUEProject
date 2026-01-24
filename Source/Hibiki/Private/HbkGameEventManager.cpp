#include "HbkGameEventManager.h"

UHbkGameEventManager::UHbkGameEventManager() {
    this->InitializeTaskActorBP = NULL;
}

bool UHbkGameEventManager::IsGameplayTaskActor(UClass* TaskActorClass) {
    return false;
}


