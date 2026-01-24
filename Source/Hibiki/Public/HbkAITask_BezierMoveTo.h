#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameplayTask.h"
#include "BezierMoveTaskCompletedSignatureDelegate.h"
#include "HbkAITask_BezierMoveTo.generated.h"

class AAIController;
class AActor;
class UCurveFloat;
class UHbkAITask_BezierMoveTo;

UCLASS(Blueprintable)
class HIBIKI_API UHbkAITask_BezierMoveTo : public UAITask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayTask::FGenericGameplayTaskDelegate OnRequestFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBezierMoveTaskCompletedSignature OnMoveFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* GoalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GoalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartControlOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GoalControlOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Seconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEasingFunc::Type> EasingFuncType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RatioBlendExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AdjustRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MoveCurveAsset;
    
public:
    UHbkAITask_BezierMoveTo();

    UFUNCTION(BlueprintCallable)
    static UHbkAITask_BezierMoveTo* AIMoveTo(AAIController* Controller, AActor* NewGoalActor, FVector NewGoalLocation, FVector NewStartControlOffset, FVector NewGoalControlOffset, float NewSeconds, TEnumAsByte<EEasingFunc::Type> NewEasingFuncType, float NewRatioBlendExp, UCurveFloat* NewMoveCurveAsset, bool NewAdjustRotation, bool bLockAILogic);
    
};

