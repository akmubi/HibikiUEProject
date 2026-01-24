#pragma once
#include "CoreMinimal.h"
#include "EHbkBPMRushStartListItemType.h"
#include "HbkListItemBaseWidget.h"
#include "HbkBPMRushStartListItemWidget.generated.h"

class UPanelWidget;
class UTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHbkBPMRushStartListItemWidget : public UHbkListItemBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkBPMRushStartListItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayDescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* TitleTextArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ButtonIcon;
    
public:
    UHbkBPMRushStartListItemWidget();

};

