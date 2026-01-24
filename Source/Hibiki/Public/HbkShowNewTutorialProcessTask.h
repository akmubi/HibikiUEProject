#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkTaskNewTutorialDelegateDelegate.h"
#include "HbkShowNewTutorialProcessTask.generated.h"

class UDataTable;
class UHbkShowNewTutorialProcessTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkShowNewTutorialProcessTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskNewTutorialDelegate DisplayEnd;
    
    UHbkShowNewTutorialProcessTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowNewTutorialProcessTask* ShowTutorialProcess(UObject* WorldContextObject, UDataTable* TutorialProcessDataTable, FName TutorialProcessID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDisplayEndClear();
    
};

