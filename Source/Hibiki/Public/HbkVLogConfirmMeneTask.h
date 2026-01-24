#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "VLogEventDelegateDelegate.h"
#include "HbkVLogConfirmMeneTask.generated.h"

class AHbkVLogConfirmController;
class UHbkVLogConfirmMeneTask;
class UObject;

UCLASS(Blueprintable)
class UHbkVLogConfirmMeneTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkVLogConfirmController> VLogController;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVLogEventDelegate OnCloseVLogConfirm;
    
public:
    UHbkVLogConfirmMeneTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkVLogConfirmMeneTask* ShowVLogConfirmMene(UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadCompleteVLogConfirm();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseVLogConfirmMene();
    
};

