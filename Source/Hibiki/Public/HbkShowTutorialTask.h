#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkTaskTutorialDelegateDelegate.h"
#include "HbkShowTutorialTask.generated.h"

class UHbkShowTutorialTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkShowTutorialTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskTutorialDelegate DisplayEnd;
    
    UHbkShowTutorialTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowTutorialTask* ShowTutorial(UObject* WorldContextObject, FGameplayTag TutorialTag, bool ButtonClose);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDisplayEndTutorial();
    
};

