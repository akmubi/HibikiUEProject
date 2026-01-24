#pragma once
#include "CoreMinimal.h"
#include "EHbkDifficultyType.h"
#include "HbkStageSelectMenuListItemWidget.h"
#include "HbkStageSelectMenuDifficultyListItemWidget.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStageSelectMenuDifficultyListItemWidget : public UHbkStageSelectMenuListItemWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkDifficultyType DifficultyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* NoDamageIcon;
    
public:
    UHbkStageSelectMenuDifficultyListItemWidget();

};

