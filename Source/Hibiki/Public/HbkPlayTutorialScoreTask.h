#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialResultType.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkTaskTutorialDelegateDelegate.h"
#include "HbkPlayTutorialScoreTask.generated.h"

class UHbkPlayTutorialScoreTask;
class UHbkTutorialScoreAsset;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkPlayTutorialScoreTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskTutorialDelegate ShowScoreUI;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskTutorialDelegate ScoreStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskTutorialDelegate ResultAlmost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskTutorialDelegate ResultGood;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskTutorialDelegate ResultGreat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskTutorialDelegate Ended;
    
    UHbkPlayTutorialScoreTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkPlayTutorialScoreTask* PlayTutorialWithScore(UObject* WorldContextObject, UHbkTutorialScoreAsset* TutorialAsset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTutorialResult(EHbkTutorialResultType ResultType);
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnStartScore();
    
    UFUNCTION(BlueprintCallable)
    void OnRestartScore();
    
    UFUNCTION(BlueprintCallable)
    void OnRegisterScore();
    
};

