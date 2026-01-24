#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkStoreMenuChipsEquipmentDescriptionListWidget.generated.h"

class UHbkStoreMenuChipsEquipmentDescriptionWidget;
class UImage;
class UPanelWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStoreMenuChipsEquipmentDescriptionListWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkStoreMenuChipsEquipmentDescriptionWidget> EquippedItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkStoreMenuChipsEquipmentDescriptionWidget> SelectedItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* EquippedEmptyArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* EquippedArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* SelectedArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ArrowLoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkStoreMenuChipsEquipmentDescriptionWidget> EquippedEmptyItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkStoreMenuChipsEquipmentDescriptionWidget> SelectedItem;
    
public:
    UHbkStoreMenuChipsEquipmentDescriptionListWidget();

};

