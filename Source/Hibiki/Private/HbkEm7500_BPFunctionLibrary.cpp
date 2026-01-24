#include "HbkEm7500_BPFunctionLibrary.h"

UHbkEm7500_BPFunctionLibrary::UHbkEm7500_BPFunctionLibrary() {
}

void UHbkEm7500_BPFunctionLibrary::HitCheck(const AHbkBossStageControllerBase* StageController, const FVector& TraceStart, const FVector& TraceEnd, float CapsuleRadius, const TArray<AActor*>& IgnoreActors, bool& bOutIsHit, FVector& OutHitLocation, FVector& OutHitFaceNormal, bool bIsDebugDraw) {
}

bool UHbkEm7500_BPFunctionLibrary::GetPlayerAroundLocation(const AHbkBossStageControllerBase* StageController, float PlayerDistance, float PlayerDistanceRange, float MoveDistance, float MoveAngle, bool& bOutIsHit, FVector& OutLocation, bool bIsDebugDraw) {
    return false;
}

TArray<TEnumAsByte<EObjectTypeQuery>> UHbkEm7500_BPFunctionLibrary::GetObjectTypeQuerys(const AHbkBossStageControllerBase* StageController) {
    return TArray<TEnumAsByte<EObjectTypeQuery>>();
}

AActor* UHbkEm7500_BPFunctionLibrary::GetAttackTarget(const AHbkBossStageControllerBase* StageController) {
    return NULL;
}


