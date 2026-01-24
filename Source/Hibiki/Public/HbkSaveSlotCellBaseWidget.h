#pragma once
#include "CoreMinimal.h"
#include "HbkListItemInterface.h"
#include "HbkUserWidget.h"
#include "HbkSaveSlotCellBaseWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHbkSaveSlotCellBaseWidget : public UHbkUserWidget, public IHbkListItemInterface {
    GENERATED_BODY()
public:
    UHbkSaveSlotCellBaseWidget();


    // Fix for true pure virtual functions not being implemented
};

