#pragma once
#include "CoreMinimal.h"
#include "EHbkJukeBoxRepeatType.h"
#include "HbkJukeBoxButtonWidget.h"
#include "HbkJukeBoxRepeatButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHbkJukeBoxRepeatButtonWidget : public UHbkJukeBoxButtonWidget {
    GENERATED_BODY()
public:
    UHbkJukeBoxRepeatButtonWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ChangeRepeatType(EHbkJukeBoxRepeatType NewRepeatType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ChangeHighlightOpacity(float NewOpacity);
    
};

