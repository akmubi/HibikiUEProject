#pragma once
#include "CoreMinimal.h"
#include "HbkComboItemBaseWidget.h"
#include "HbkComboItemCellWidget.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkComboItemCellWidget : public UHbkComboItemBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* SelectText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* UnSelectText;
    
public:
    UHbkComboItemCellWidget();

};

