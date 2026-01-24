#include "HbkEm7500CircleFireGroupParam.h"

FHbkEm7500CircleFireGroupParam::FHbkEm7500CircleFireGroupParam() {
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->bIsSpawn = false;
    this->SpawnDistance = 0.00f;
    this->NoteTypeToSpawn = EHbkNote::None;
    this->NoteCountToSpawn = 0.00f;
    this->SpawnAroundCount = 0;
    this->SpawnOffsetYaw = 0.00f;
    this->SpawnScale = 0.00f;
}

