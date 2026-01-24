#pragma once
#include "CoreMinimal.h"
#include "HbkListItemBaseWidget.h"
#include "HbkStageSelectMenuDotListItemWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStageSelectMenuDotListItemWidget : public UHbkListItemBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Unselected;
    
public:
    UHbkStageSelectMenuDotListItemWidget();

};

