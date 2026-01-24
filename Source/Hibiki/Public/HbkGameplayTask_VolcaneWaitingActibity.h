#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_VolcaneWaitingActibity.generated.h"

class UHbkGameplayTask_VolcaneWaitingActibity;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_VolcaneWaitingActibity : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndDelegate OnEnd;
    
    UHbkGameplayTask_VolcaneWaitingActibity(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_VolcaneWaitingActibity* VolcaneWaitingActibity(UObject* WorldContextObject, FGameplayTag VolcaneTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnVolcaneWaitingActibity();
    
};

