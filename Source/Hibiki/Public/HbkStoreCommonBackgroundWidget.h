#pragma once
#include "CoreMinimal.h"
#include "EHbkStoreButtonDescriptionType.h"
#include "HbkUserWidget.h"
#include "HbkStoreCommonBackgroundWidget.generated.h"

class UHbkStoreMoney;
class UImage;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStoreCommonBackgroundWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkStoreButtonDescriptionType ButtonDescriptionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PurchaseIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* EquipmentIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreMoney* InventoryResourceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ButtonDescription;
    
public:
    UHbkStoreCommonBackgroundWidget();

};

