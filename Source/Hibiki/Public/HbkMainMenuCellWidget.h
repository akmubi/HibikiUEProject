#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkMainMenuCellWidget.generated.h"

class UTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHbkMainMenuCellWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* HBox_TextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MenuNameText;
    
public:
    UHbkMainMenuCellWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeSelect(bool bSelect);
    
};

