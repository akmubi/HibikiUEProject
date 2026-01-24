#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_VolcaneWaitingNumEruption.generated.h"

class UHbkGameplayTask_VolcaneWaitingNumEruption;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_VolcaneWaitingNumEruption : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndDelegate OnEnd;
    
    UHbkGameplayTask_VolcaneWaitingNumEruption(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_VolcaneWaitingNumEruption* VolcaneWaitingNumEruption(UObject* WorldContextObject, FGameplayTag VolcaneTag, int32 EruptedCount);
    
};

