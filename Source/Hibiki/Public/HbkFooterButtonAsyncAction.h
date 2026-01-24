#pragma once
#include "CoreMinimal.h"
#include "ETngKeyButtonMap.h"
#include "FooterButtonEndEventDelegate.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "Templates/SubclassOf.h"
#include "HbkFooterButtonAsyncAction.generated.h"

class UHbkFooterButtonAsyncAction;
class UHbkFooterButtonWidget;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkFooterButtonAsyncAction : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkFooterButtonWidget* ButtonWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFooterButtonEndEvent OnCompleteButtonInput;
    
    UHbkFooterButtonAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkFooterButtonAsyncAction* ShowFooterButton(UObject* WorldContextObject, TSubclassOf<UHbkFooterButtonWidget> WidgetClass, ETngKeyButtonMap KeyButton, FText ActionName, float InputTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenWidget();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkFooterButtonAsyncAction* CloseFooterButton(UObject* WorldContextObject, TSubclassOf<UHbkFooterButtonWidget> WidgetClass);
    
};

