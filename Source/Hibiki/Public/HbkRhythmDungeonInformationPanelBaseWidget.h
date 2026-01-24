#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkRhythmDungeonInformationPanelBaseWidget.generated.h"

class UScrollBox;
class UTngRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UHbkRhythmDungeonInformationPanelBaseWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* BuffDescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* DescriptionScrollBox;
    
public:
    UHbkRhythmDungeonInformationPanelBaseWidget();

};

