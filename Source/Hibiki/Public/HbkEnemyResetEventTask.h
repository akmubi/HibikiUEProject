#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkEnemyResetEventTaskDelegateDelegate.h"
#include "HbkEnemyResetEventTask.generated.h"

class AHbkEnemyResetEventActor;
class UHbkEnemyResetEventTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkEnemyResetEventTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEnemyResetEventTaskDelegate OnFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEnemyResetEventActor> EnemyResetEventActorPtr;
    
public:
    UHbkEnemyResetEventTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkEnemyResetEventTask* PlayEnemyResetEventTask(UObject* WorldContextObject, FGameplayTag EnemyResetTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndEnemyResetEventActor();
    
};

