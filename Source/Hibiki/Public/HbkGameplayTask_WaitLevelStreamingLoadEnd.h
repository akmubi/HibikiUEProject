#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_WaitLevelStreamingLoadEnd.generated.h"

class UHbkGameplayTask_WaitLevelStreamingLoadEnd;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_WaitLevelStreamingLoadEnd : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskWaitLevelStreamingLoadEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskWaitLevelStreamingLoadEndDelegate OnLoadEnd;
    
    UHbkGameplayTask_WaitLevelStreamingLoadEnd(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_WaitLevelStreamingLoadEnd* WaitLevelStreamingLoadEnd(UObject* WorldContextObject);
    
};

