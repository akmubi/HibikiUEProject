#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkAchievementsGetAllRewardsResultListItemWidget.generated.h"

class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkAchievementsGetAllRewardsResultListItemWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemAmountText;
    
public:
    UHbkAchievementsGetAllRewardsResultListItemWidget();

};

