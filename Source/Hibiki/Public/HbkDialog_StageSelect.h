#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkCustomDialogParam.h"
#include "HbkDialog_StageSelectCustomDelegateDelegate.h"
#include "HbkDialog_StageSelect.generated.h"

class UHbkDialog_StageSelect;
class UObject;

UCLASS(Blueprintable)
class UHbkDialog_StageSelect : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDialog_StageSelectCustomDelegate PushedButton1;
    
    UHbkDialog_StageSelect();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkDialog_StageSelect* StageSelect_Warning(UObject* WorldContextObject, const FHbkCustomDialogParam& CustomDialogParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPushedButton1();
    
};

