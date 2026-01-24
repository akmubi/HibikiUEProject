#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkRhythmAssistPartsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmAssistPartsWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkRhythmAssistPartsWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPartsType(bool IsLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisappear(float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAppear(float PlayRate);
    
};

