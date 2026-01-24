#include "HbkAITask_BezierMoveTo.h"

UHbkAITask_BezierMoveTo::UHbkAITask_BezierMoveTo() : UAITask(FObjectInitializer::Get()) {
    this->GoalActor = NULL;
    this->Seconds = 0.00f;
    this->EasingFuncType = EEasingFunc::Linear;
    this->RatioBlendExp = 2.00f;
    this->AdjustRotation = false;
    this->MoveCurveAsset = NULL;
}

UHbkAITask_BezierMoveTo* UHbkAITask_BezierMoveTo::AIMoveTo(AAIController* Controller, AActor* NewGoalActor, FVector NewGoalLocation, FVector NewStartControlOffset, FVector NewGoalControlOffset, float NewSeconds, TEnumAsByte<EEasingFunc::Type> NewEasingFuncType, float NewRatioBlendExp, UCurveFloat* NewMoveCurveAsset, bool NewAdjustRotation, bool bLockAILogic) {
    return NULL;
}


