#pragma once
#include "CoreMinimal.h"
#include "HbkJukeBoxButtonWidget.h"
#include "HbkJukeBoxPlayStopButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHbkJukeBoxPlayStopButtonWidget : public UHbkJukeBoxButtonWidget {
    GENERATED_BODY()
public:
    UHbkJukeBoxPlayStopButtonWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ChangePlayMode(bool bPlayMode);
    
};

