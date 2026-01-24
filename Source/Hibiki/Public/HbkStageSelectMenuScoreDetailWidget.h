#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkStageSelectMenuScoreDetailWidget.generated.h"

class UPanelWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStageSelectMenuScoreDetailWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* BattleItemArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ClearTimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* JustTimingPercentText;
    
public:
    UHbkStageSelectMenuScoreDetailWidget();

};

