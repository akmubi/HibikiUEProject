#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkCloseTutorialTask.generated.h"

class UHbkCloseTutorialTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkCloseTutorialTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UHbkCloseTutorialTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkCloseTutorialTask* CloseTutorial(UObject* WorldContextObject, FGameplayTag TutorialTag);
    
};

