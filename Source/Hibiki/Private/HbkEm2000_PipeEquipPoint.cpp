#include "HbkEm2000_PipeEquipPoint.h"

AHbkEm2000_PipeEquipPoint::AHbkEm2000_PipeEquipPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsCanBeObtained = true;
    this->DotProductThreshold = 0.00f;
}

void AHbkEm2000_PipeEquipPoint::Obtained(bool Enable) {
}


