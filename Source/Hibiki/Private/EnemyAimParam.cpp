#include "EnemyAimParam.h"

FEnemyAimParam::FEnemyAimParam() {
    this->bIsDist2D = false;
    this->InterpSpeed = 0.00f;
    this->DistMin = 0.00f;
    this->DistMax = 0.00f;
    this->AngleLimit = 0.00f;
    this->TargetLocation = FVector(0.0f);
    this->CurrentAimLocation = FVector(0.0f);
}

