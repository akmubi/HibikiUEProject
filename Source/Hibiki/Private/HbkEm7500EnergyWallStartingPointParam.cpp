#include "HbkEm7500EnergyWallStartingPointParam.h"

FHbkEm7500EnergyWallStartingPointParam::FHbkEm7500EnergyWallStartingPointParam() {
    this->NoteToSpawn = EHbkNote::None;
    this->NoteCountToSpawn = 0;
    this->StartingPointType = EHbkEm7500EnergyWallStartingPointType::Fixed;
    this->DirectionYaw = 0.00f;
    this->SearchHalfRangeYaw = 0.00f;
    this->LaneCount = 0;
    this->LaneIndex = 0;
    this->LaneRetentionCount = 0;
    this->OffsetLocation = FVector(0.0f);
}

