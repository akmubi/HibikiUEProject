#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_EVScrollPowerOff.generated.h"

class UHbkGameplayTask_EVScrollBattle;
class UHbkGameplayTask_EVScrollPowerOff;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVScrollPowerOff : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskScrollPowerOff_OnSuccess);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollPowerOff_OnSuccess OnSuccess;
    
    UHbkGameplayTask_EVScrollPowerOff(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVScrollPowerOff* EventScrollPowerOff(UObject* WorldContextObject, UHbkGameplayTask_EVScrollBattle* scrollTask);
    
};

