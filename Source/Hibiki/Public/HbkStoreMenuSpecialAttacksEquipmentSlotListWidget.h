#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkStoreMenuSpecialAttacksEquipmentSlotListWidget.generated.h"

class UHbkListControlWidget;
class UHbkStoreCommonEquipmentCommandWidget;
class UHbkStoreCommonListItemWidget;
class UHbkStoreMenuSpecialAttacksEquipmentSlotListItemWidget;
class UPanelWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStoreMenuSpecialAttacksEquipmentSlotListWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* EquipmentSlotArea1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* EquipmentSlotArea2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreMenuSpecialAttacksEquipmentSlotListItemWidget* EquipmentSlotItem1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreMenuSpecialAttacksEquipmentSlotListItemWidget* EquipmentSlotItem2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* EquipmentSelectedArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreCommonListItemWidget* EquipmentSelectedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreCommonEquipmentCommandWidget* EquipmentCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SelectSlot1Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SelectSlot2Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LoopAnimation;
    
public:
    UHbkStoreMenuSpecialAttacksEquipmentSlotListWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnSelectListItem(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
};

