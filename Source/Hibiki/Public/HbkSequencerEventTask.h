#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkSequencerEventTaskDelegateDelegate.h"
#include "HbkSequencerEventTask.generated.h"

class AHbkSequencerEventActor;
class UHbkSequencerEventTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkSequencerEventTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSequencerEventTaskDelegate OnFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkSequencerEventActor> SequencerEventActorPtr;
    
public:
    UHbkSequencerEventTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkSequencerEventTask* PlaySequencerEventTask(UObject* WorldContextObject, FGameplayTag SequencerEventTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndSequencerEventActor(bool bSkipped);
    
};

