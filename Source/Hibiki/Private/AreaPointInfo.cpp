#include "AreaPointInfo.h"

FAreaPointInfo::FAreaPointInfo() {
    this->EnvScore = 0.00f;
    this->PointIndex = 0;
    this->HeuristicCost = 0.00f;
    this->TotalCost = 0.00f;
    this->DecrementScoreValue = 0.00f;
    this->bIsScoreUpdated = false;
    this->RangeType = EAreaPointRangeType::None;
    this->bIsFailedItem = false;
    this->EnemyHere = false;
    this->Location = FVector(0.0f);
}

