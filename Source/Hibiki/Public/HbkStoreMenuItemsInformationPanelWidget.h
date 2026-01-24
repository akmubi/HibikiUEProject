#pragma once
#include "CoreMinimal.h"
#include "HbkStoreInformationPanelBaseWidget.h"
#include "HbkStoreMenuItemsInformationPanelWidget.generated.h"

class UImage;
class UPanelWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStoreMenuItemsInformationPanelWidget : public UHbkStoreInformationPanelBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NoImageIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* PossessionArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PossessionText;
    
public:
    UHbkStoreMenuItemsInformationPanelWidget();

};

