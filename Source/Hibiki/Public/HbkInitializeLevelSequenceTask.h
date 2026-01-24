#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkLvSeqInitializedDelegateDelegate.h"
#include "HbkInitializeLevelSequenceTask.generated.h"

class AHbkLevelSequenceActor;
class UHbkInitializeLevelSequenceTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkInitializeLevelSequenceTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkLvSeqInitializedDelegate OnInitialized;
    
    UHbkInitializeLevelSequenceTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkInitializeLevelSequenceTask* IsInitializedLevelSequence(UObject* WorldContextObject, AHbkLevelSequenceActor* LevelSequenceActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishTask();
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckInitialize();
    
};

