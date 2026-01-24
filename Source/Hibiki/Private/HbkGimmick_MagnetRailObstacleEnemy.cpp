#include "HbkGimmick_MagnetRailObstacleEnemy.h"

AHbkGimmick_MagnetRailObstacleEnemy::AHbkGimmick_MagnetRailObstacleEnemy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMoveSpline = true;
    this->moveSpeed = 100.00f;
    this->bMoveReverse = false;
    this->bMeshReverse = true;
    this->PlayerHitVfxRef = NULL;
    this->StartDistance = 0.00f;
    this->moveSplineActor = NULL;
}


