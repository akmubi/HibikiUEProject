#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkCustomDialogParam.h"
#include "HbkDialog_GetItemCustomDelegateDelegate.h"
#include "HbkDialog_GetItem.generated.h"

class UHbkDialog_GetItem;
class UObject;

UCLASS(Blueprintable)
class UHbkDialog_GetItem : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDialog_GetItemCustomDelegate PushedButton1;
    
    UHbkDialog_GetItem();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPushedButton1();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkDialog_GetItem* GetItem_Dialog(UObject* WorldContextObject, const FHbkCustomDialogParam& CustomDialogParam, FGameplayTag InventoryId);
    
};

