#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkCustomDialogParam.h"
#include "HbkDialog_TutorialCustomDelegateDelegate.h"
#include "HbkDialog_Tutorial.generated.h"

class UHbkDialog_Tutorial;
class UObject;

UCLASS(Blueprintable)
class UHbkDialog_Tutorial : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDialog_TutorialCustomDelegate PushedButton1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDialog_TutorialCustomDelegate PushedButton2;
    
    UHbkDialog_Tutorial();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkDialog_Tutorial* TutorialSkip_Dialog(UObject* WorldContextObject, const FHbkCustomDialogParam& CustomDialogParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPushedButton2();
    
    UFUNCTION(BlueprintCallable)
    void OnPushedButton1();
    
};

