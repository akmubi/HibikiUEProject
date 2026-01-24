#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkRhythmAssistInputWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmAssistInputWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkRhythmAssistInputWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPerfect(float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMiss(float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGood(float PlayRate);
    
};

