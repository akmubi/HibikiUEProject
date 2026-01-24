#include "HbkEm7500ThunderOriginSequentialParam.h"

FHbkEm7500ThunderOriginSequentialParam::FHbkEm7500ThunderOriginSequentialParam() {
    this->NoteTypeToSpawn = EHbkNote::None;
    this->NoteCountToSpawn = 0.00f;
    this->NoteTypeToSequential = EHbkNote::None;
    this->NoteCountToSequential = 0.00f;
    this->NumberOfSpawnAtOnce = 0;
    this->SpawnOffsetYaw = 0.00f;
    this->SpawnOffsetLocation = FVector(0.0f);
}

