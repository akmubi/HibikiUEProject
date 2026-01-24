#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_VolcaneDeactivator.generated.h"

class UHbkGameplayTask_VolcaneDeactivator;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_VolcaneDeactivator : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeactivatorDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeactivatorDelegate OnDeactivate;
    
    UHbkGameplayTask_VolcaneDeactivator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_VolcaneDeactivator* VolcaneDeactivateWaitOneEruption(UObject* WorldContextObject, FGameplayTag VolcaneTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_VolcaneDeactivator* VolcaneDeactivateImmediately(UObject* WorldContextObject, FGameplayTag VolcaneTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnVolcaneDeactivated();
    
};

