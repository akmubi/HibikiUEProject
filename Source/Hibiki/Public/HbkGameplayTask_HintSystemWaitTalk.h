#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_HintSystemWaitTalk.generated.h"

class UHbkGameplayTask_HintSystemWaitTalk;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_HintSystemWaitTalk : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndDelegate OnEnd;
    
    UHbkGameplayTask_HintSystemWaitTalk(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_HintSystemWaitTalk* WaitHintSystemTalk(UObject* WorldContextObject);
    
};

