#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkStageResultNextSelectCellWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UHbkStageResultNextSelectCellWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
public:
    UHbkStageResultNextSelectCellWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeSelect(bool bSelect);
    
};

