#include "ReserveLocationInfo.h"

FReserveLocationInfo::FReserveLocationInfo() {
    this->Radius = 0.00f;
    this->EnemyHere = false;
    this->SearchedIndex = 0;
    this->RangeType = EAreaPointRangeType::None;
    this->Location = FVector(0.0f);
}

