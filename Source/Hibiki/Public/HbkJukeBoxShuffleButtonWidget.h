#pragma once
#include "CoreMinimal.h"
#include "HbkJukeBoxButtonWidget.h"
#include "HbkJukeBoxShuffleButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHbkJukeBoxShuffleButtonWidget : public UHbkJukeBoxButtonWidget {
    GENERATED_BODY()
public:
    UHbkJukeBoxShuffleButtonWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ChangeHighlightOpacity(float NewOpacity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ChangeEnableShuffle(bool bEnableShuffle);
    
};

