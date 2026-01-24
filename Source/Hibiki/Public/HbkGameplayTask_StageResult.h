#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkGameplayTask_StageResult.generated.h"

class UHbkGameplayTask_StageResult;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_StageResult : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskStageResultDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskStageResultDelegate ResultEnded;
    
    UHbkGameplayTask_StageResult();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_StageResult* ShowStageResult(UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Receive_ResultEnded();
    
};

