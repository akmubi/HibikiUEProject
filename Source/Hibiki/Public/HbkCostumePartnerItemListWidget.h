#pragma once
#include "CoreMinimal.h"
#include "EHbkCostumePageName.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkCostumePartnerItemListWidget.generated.h"

class UHbkCostumeItemBaseWidget;
class UHbkCostumeItemListParentWidget;
class UHbkCostumeSelectableBaseWidget;
class UHbkListControlWidget;
class UOverlay;
class UScrollBox;
class UTextBlock;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkCostumePartnerItemListWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkCostumeItemBaseWidget> ItemWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHbkCostumeItemBaseWidget*> EquipWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHbkCostumeItemBaseWidget*> StoreWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeItemBaseWidget* NowSelectItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkCostumePageName CurrentPageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* NowCurrentScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* StoreBase_Scroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* EquipBase_Overlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* Equip_Scroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWrapBox* StoreList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWrapBox* EquipList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SelectCostumeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeItemListParentWidget* OwnerListWidget;
    
public:
    UHbkCostumePartnerItemListWidget();

    UFUNCTION(BlueprintCallable)
    void SetNowSelectItemWidget(UHbkCostumeSelectableBaseWidget* SelectItem);
    
};

