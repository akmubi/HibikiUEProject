#pragma once
#include "CoreMinimal.h"
#include "EHbkPauseMenuListItemType.h"
#include "HbkListItemBaseWidget.h"
#include "HbkPauseMenuListItemWidget.generated.h"

class UPanelWidget;
class UTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkPauseMenuListItemWidget : public UHbkListItemBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPauseMenuListItemType ListItemType;
    
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
    UHbkPauseMenuListItemWidget();

};

