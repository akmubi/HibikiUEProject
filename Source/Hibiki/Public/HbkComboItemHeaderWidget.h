#pragma once
#include "CoreMinimal.h"
#include "HbkComboItemBaseWidget.h"
#include "HbkComboItemHeaderWidget.generated.h"

class URichTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkComboItemHeaderWidget : public UHbkComboItemBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* SelectText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* UnSelectText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ItemArea;
    
public:
    UHbkComboItemHeaderWidget();

};

