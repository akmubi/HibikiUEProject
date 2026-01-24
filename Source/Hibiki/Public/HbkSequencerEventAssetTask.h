#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkSequencerEventAssetTaskDelegateDelegate.h"
#include "HbkSequencerEventAssetTask.generated.h"

class AHbkSequencerEventActor;
class UHbkSequencerEventAssetTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkSequencerEventAssetTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSequencerEventAssetTaskDelegate OnFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkSequencerEventActor> SequencerEventActorPtr;
    
public:
    UHbkSequencerEventAssetTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkSequencerEventAssetTask* PreLoadSequencerEventAssetTask(UObject* WorldContextObject, FGameplayTag SequencerEventTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoadEndAsset();
    
};

