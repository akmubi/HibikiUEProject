#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkTaskTutorialDelegateDelegate.h"
#include "HbkShowTutorialTaskWithTime.generated.h"

class UHbkShowTutorialTaskWithTime;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkShowTutorialTaskWithTime : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskTutorialDelegate DisplayEnd;
    
    UHbkShowTutorialTaskWithTime();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowTutorialTaskWithTime* ShowTutorialWithTime(UObject* WorldContextObject, float Timer, FGameplayTag TutorialTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDisplayEndTutorial();
    
    UFUNCTION(BlueprintCallable)
    void ClearTimer();
    
};

