#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkRhythmAssistCatWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmAssistCatWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkRhythmAssistCatWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInput(bool bIsJust);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeatEvent(float PlayRate);
    
};

