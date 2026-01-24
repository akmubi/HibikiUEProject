#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmTowerRestTimeItemType.h"
#include "HbkListItemBaseWidget.h"
#include "HbkRhythmTowerRestTimeItemWidget.generated.h"

class UPanelWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmTowerRestTimeItemWidget : public UHbkListItemBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkRhythmTowerRestTimeItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleDisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionDisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* TitleTextArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
public:
    UHbkRhythmTowerRestTimeItemWidget();

};

