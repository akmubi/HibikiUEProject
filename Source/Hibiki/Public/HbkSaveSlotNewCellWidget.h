#pragma once
#include "CoreMinimal.h"
#include "HbkSaveSlotCellBaseWidget.h"
#include "HbkSaveSlotNewCellWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHbkSaveSlotNewCellWidget : public UHbkSaveSlotCellBaseWidget {
    GENERATED_BODY()
public:
    UHbkSaveSlotNewCellWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeSelectImpl(bool bSelect);
    
};

