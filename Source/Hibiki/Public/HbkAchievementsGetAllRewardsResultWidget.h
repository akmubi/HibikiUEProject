#pragma once
#include "CoreMinimal.h"
#include "HbkPopupDialogWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkAchievementsGetAllRewardsResultWidget.generated.h"

class UHbkAchievementsGetAllRewardsResultListItemWidget;
class UPanelWidget;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkAchievementsGetAllRewardsResultWidget : public UHbkPopupDialogWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkAchievementsGetAllRewardsResultListItemWidget> ListItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ListScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ScrollArea;
    
public:
    UHbkAchievementsGetAllRewardsResultWidget();

};

