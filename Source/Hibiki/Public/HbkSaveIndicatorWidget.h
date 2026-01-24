#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkSaveIndicatorWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkSaveIndicatorWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkSaveIndicatorWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnim();
    
};

