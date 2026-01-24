#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "StoreMenuEventDelegateDelegate.h"
#include "HbkShowCostumeMeneTask.generated.h"

class UHbkShowCostumeMeneTask;
class UObject;

UCLASS(Blueprintable)
class UHbkShowCostumeMeneTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreMenuEventDelegate OnCloseCostume;
    
    UHbkShowCostumeMeneTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowCostumeMeneTask* ShowCostumeMene(UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoadCompleteCostumeMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnCloseCostumeMenu();
    
};

