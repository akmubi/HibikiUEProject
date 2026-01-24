#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkTitleToHOLoadingWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHbkTitleToHOLoadingWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkTitleToHOLoadingWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartFadeOut(float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartFadeIn(float Duration);
    
};

