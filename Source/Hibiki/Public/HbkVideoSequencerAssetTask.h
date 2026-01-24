#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkVideoSequencerAssetTaskDelegateDelegate.h"
#include "HbkVideoSequencerAssetTask.generated.h"

class UHbkPlayFullscreenMovieOption;
class UHbkVideoSequencerAssetTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkVideoSequencerAssetTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkVideoSequencerAssetTaskDelegate OnFinished;
    
    UHbkVideoSequencerAssetTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkVideoSequencerAssetTask* PreLoadVideoSequencerAssetTask(UObject* WorldContextObject, UHbkPlayFullscreenMovieOption* PlayOption);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPreLoadEndVideoSequence();
    
};

