#pragma once
#include "CoreMinimal.h"
#include "EHbkTakeItemTutorialType.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkTakeItemTutorialTask.generated.h"

class UHbkTakeItemTutorialTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkTakeItemTutorialTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UHbkTakeItemTutorialTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkTakeItemTutorialTask* ShowTakeItemTutorial(UObject* WorldContextObject, EHbkTakeItemTutorialType Type);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCloseTutorial();
    
};

