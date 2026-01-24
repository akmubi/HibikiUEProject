#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkTaskOptionDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkShowOptionTask.generated.h"

class UHbkOptionWidget;
class UHbkShowOptionTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkShowOptionTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskOptionDelegate DisplayEnd;
    
    UHbkShowOptionTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowOptionTask* ShowOption(UObject* WorldContextObject, TSubclassOf<UHbkOptionWidget> OptionWidgetClass, bool bInitialSettingMode);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSaveIconDialogClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnInputLatencyDialogClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnDisplayEndClear();
    
};

