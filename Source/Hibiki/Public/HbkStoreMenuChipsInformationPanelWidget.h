#pragma once
#include "CoreMinimal.h"
#include "HbkStoreInformationPanelBaseWidget.h"
#include "HbkStoreMenuChipsInformationPanelWidget.generated.h"

class UHbkStoreMenuChipsDescriptionLevelWidget;
class UImage;
class UTngRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStoreMenuChipsInformationPanelWidget : public UHbkStoreInformationPanelBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ChipIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* AppendText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreMenuChipsDescriptionLevelWidget* ChipDescriptionLevel1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreMenuChipsDescriptionLevelWidget* ChipDescriptionLevel2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreMenuChipsDescriptionLevelWidget* ChipDescriptionLevel3;
    
public:
    UHbkStoreMenuChipsInformationPanelWidget();

};

