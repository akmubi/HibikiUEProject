#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_PlayerWaitOnGround.generated.h"

class UHbkGameplayTask_PlayerWaitOnGround;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_PlayerWaitOnGround : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskPlayerWaitOnGroundDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskPlayerWaitOnGroundDelegate OnEnd;
    
    UHbkGameplayTask_PlayerWaitOnGround(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_PlayerWaitOnGround* PlayerWaitOnGround(UObject* WorldContextObject);
    
};

