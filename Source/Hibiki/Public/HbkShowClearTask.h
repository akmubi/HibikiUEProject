#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkTaskClearDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkShowClearTask.generated.h"

class UHbkClearWidget;
class UHbkShowClearTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkShowClearTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskClearDelegate DisplayEnd;
    
    UHbkShowClearTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowClearTask* ShowClear(UObject* WorldContextObject, TSubclassOf<UHbkClearWidget> ClearWidget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDisplayEndClear();
    
};

