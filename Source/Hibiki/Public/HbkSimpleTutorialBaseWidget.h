#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "SimpleTutorialDelegateDelegate.h"
#include "HbkSimpleTutorialBaseWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkSimpleTutorialBaseWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleTutorialDelegate OnTutorialEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleTutorialDelegate OnTutorialTimerEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InputButton;
    
public:
    UHbkSimpleTutorialBaseWidget();

    UFUNCTION(BlueprintCallable)
    void WidgetClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayButtonOpen();
    
};

