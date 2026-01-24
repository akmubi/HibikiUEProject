#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HintButtonEndEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkHintButtonAsyncAction.generated.h"

class UHbkHintButtonAsyncAction;
class UHbkHintButtonWidget;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkHintButtonAsyncAction : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkHintButtonWidget* HintButtonWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHintButtonEndEvent OnCompleteButtonInput;
    
    UHbkHintButtonAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkHintButtonAsyncAction* ShowHintButton(UObject* WorldContextObject, TSubclassOf<UHbkHintButtonWidget> WidgetClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenHint();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkHintButtonAsyncAction* CloseHintButton(UObject* WorldContextObject, TSubclassOf<UHbkHintButtonWidget> WidgetClass);
    
};

