#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_EVPowerOutage.generated.h"

class UHbkGameplayTask_EVPowerOutage;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_EVPowerOutage : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskEVPowerOutage_Success);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskEVPowerOutage_Failure);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskEVPowerOutage_Success OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskEVPowerOutage_Failure OnFailure;
    
    UHbkGameplayTask_EVPowerOutage(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVPowerOutage* EventPowerOutage(UObject* WorldContextObject, FGameplayTagContainer Tag);
    
};

