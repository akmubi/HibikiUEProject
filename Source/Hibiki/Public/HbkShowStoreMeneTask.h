#pragma once
#include "CoreMinimal.h"
#include "EHbkStoreTutorialType.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "StoreMenuEventDelegateDelegate.h"
#include "HbkShowStoreMeneTask.generated.h"

class UHbkShowStoreMeneTask;
class UObject;

UCLASS(Blueprintable)
class UHbkShowStoreMeneTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreMenuEventDelegate OnCloseStore;
    
    UHbkShowStoreMeneTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowStoreMeneTask* ShowStoreMene(UObject* WorldContextObject, EHbkStoreTutorialType InTutorialType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoadCompleteStoreMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnCloseStoreMenu();
    
};

