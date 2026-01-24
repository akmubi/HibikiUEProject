#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkStoreMenuSpecialAttacksEquipmentSkillMovieWidget.generated.h"

class UHbkSkillMovieWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStoreMenuSpecialAttacksEquipmentSkillMovieWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkillMovieWidget* SkillMovie;
    
public:
    UHbkStoreMenuSpecialAttacksEquipmentSkillMovieWidget();

};

