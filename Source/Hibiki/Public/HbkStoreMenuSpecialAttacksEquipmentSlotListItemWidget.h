#pragma once
#include "CoreMinimal.h"
#include "HbkStoreCommonListItemWidget.h"
#include "HbkStoreMenuSpecialAttacksEquipmentSlotListItemWidget.generated.h"

class UImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStoreMenuSpecialAttacksEquipmentSlotListItemWidget : public UHbkStoreCommonListItemWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HighlightLoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* EquipAnimation;
    
public:
    UHbkStoreMenuSpecialAttacksEquipmentSlotListItemWidget();

};

