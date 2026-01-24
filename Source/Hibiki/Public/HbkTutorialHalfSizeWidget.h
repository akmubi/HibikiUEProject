#pragma once
#include "CoreMinimal.h"
#include "HbkSimpleTutorialBaseWidget.h"
#include "HbkTutorialHalfSizeWidget.generated.h"

class UHbkTutorialHalfCellWidget;
class URichTextBlock;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTutorialHalfSizeWidget : public UHbkSimpleTutorialBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TextOnly_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TextOnly_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TextOnly_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTutorialHalfCellWidget* CellText_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTutorialHalfCellWidget* CellText_2;
    
public:
    UHbkTutorialHalfSizeWidget();

};

