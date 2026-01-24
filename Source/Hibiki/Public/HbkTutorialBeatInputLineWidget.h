#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialButtonTiming.h"
#include "HbkUserWidget.h"
#include "HbkTutorialBeatInputLineWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTutorialBeatInputLineWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkTutorialBeatInputLineWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSetResult(EHbkTutorialButtonTiming ResultType);
    
};

