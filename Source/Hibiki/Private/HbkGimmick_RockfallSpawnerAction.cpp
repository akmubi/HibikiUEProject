#include "HbkGimmick_RockfallSpawnerAction.h"

FHbkGimmick_RockfallSpawnerAction::FHbkGimmick_RockfallSpawnerAction() {
    this->SpawnNum = 0;
    this->MinSpawnIntervalTime = 0.00f;
    this->MaxSpawnIntervalTime = 0.00f;
    this->MinScaleProduct = 0.00f;
    this->MaxScaleProduct = 0.00f;
    this->SpawnExtent = FBox(EForceInit::ForceInit);
}

