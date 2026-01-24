#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialButtonTiming.h"
#include "HbkUserWidget.h"
#include "HbkTutorialBeatJudgeWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTutorialBeatJudgeWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkTutorialBeatJudgeWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSetResult(EHbkTutorialButtonTiming Result);
    
};

