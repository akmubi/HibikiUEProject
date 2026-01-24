#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkDifficultySelectCellWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UHbkDifficultySelectCellWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MenuNameText;
    
public:
    UHbkDifficultySelectCellWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeSelect(bool bSelect);
    
};

