#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_TalkEventSQ.generated.h"

class UHbkGameplayTask_TalkEventSQ;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_TalkEventSQ : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskTalkEventDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskTalkEventDelegate OnFinished;
    
    UHbkGameplayTask_TalkEventSQ(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ReceiveTalkEnd();
    
    UFUNCTION(BlueprintCallable)
    void ReceivePostDeployTalk();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_TalkEventSQ* PlayTalkEventSQ(UObject* WorldContextObject, FGameplayTagContainer Tags, FName callSign);
    
};

