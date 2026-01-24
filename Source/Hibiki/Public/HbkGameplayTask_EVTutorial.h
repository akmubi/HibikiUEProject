#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "EHbkTutorialResultType.h"
#include "HbkGameplayTask_EVTutorial.generated.h"

class UHbkGameEnvState;
class UHbkGameplayTask_EVTutorial;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVTutorial : public UGameplayTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameEnvState* GameEnvState;
    
public:
    UHbkGameplayTask_EVTutorial(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTutorialResult(EHbkTutorialResultType ResultType);
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialEnd();
    
public:
    UFUNCTION(BlueprintCallable)
    void DestroyTask();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVTutorial* CreateTutorialEventTask(UObject* WorldContextObject, FName assetDataName, FName tutorialName);
    
};

