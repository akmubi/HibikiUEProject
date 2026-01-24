#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "GameplayTagContainer.h"
#include "Hbk_CheckDirAndPerformData.h"
#include "Hbk_CheckDirAndPerformTraceData.h"
#include "HbkBTTask_CheckDirAndPerform.generated.h"

class AAIController;
class APawn;

UCLASS(Blueprintable)
class HIBIKI_API UHbkBTTask_CheckDirAndPerform : public UBTTask_BlueprintBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbk_CheckDirAndPerformData> CheckData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbk_CheckDirAndPerformTraceData TraceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDecideTag_OnSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDecideTag_Far_OnFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawTraceDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawTraceDebugDuration;
    
public:
    UHbkBTTask_CheckDirAndPerform();

protected:
    UFUNCTION(BlueprintCallable)
    bool CheckAndGetTag(AAIController* OwnerController, APawn* ControlledPawn, FGameplayTag& Tag);
    
};

