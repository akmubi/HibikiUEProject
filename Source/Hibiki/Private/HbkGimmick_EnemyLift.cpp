#include "HbkGimmick_EnemyLift.h"

AHbkGimmick_EnemyLift::AHbkGimmick_EnemyLift(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
}

void AHbkGimmick_EnemyLift::SplineMoveStart() {
}

void AHbkGimmick_EnemyLift::SplineMoveEnd() {
}

float AHbkGimmick_EnemyLift::GetTransformAlpha() {
    return 0.0f;
}

void AHbkGimmick_EnemyLift::cs0553toInGame() {
}


