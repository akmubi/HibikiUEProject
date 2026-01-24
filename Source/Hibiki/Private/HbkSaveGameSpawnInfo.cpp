#include "HbkSaveGameSpawnInfo.h"

FHbkSaveGameSpawnInfo::FHbkSaveGameSpawnInfo() {
    this->bValidPlayerLocation = false;
    this->PlayerLocation = FVector(0.0f);
    this->PlayerRotation = FRotator(0.0f);
}

