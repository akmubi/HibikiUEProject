#include "HbkManagerAIController.h"

AHbkManagerAIController::AHbkManagerAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WallCheckTraceQuery = TraceTypeQuery2;
}

bool AHbkManagerAIController::RequestMoveToLocation(FVector& ResultLocation, EAreaPointRangeType RangeType, AHbkEnemyAIController* EnemyAI) {
    return false;
}

void AHbkManagerAIController::RemoveReserveInfo(AHbkEnemyAIController* EnemyAI) {
}


