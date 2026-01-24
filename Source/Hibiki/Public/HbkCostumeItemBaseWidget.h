#pragma once
#include "CoreMinimal.h"
#include "HbkCostumeAllInfo.h"
#include "HbkCostumeSelectableBaseWidget.h"
#include "HbkCostumeStoreSelectDelegateDelegate.h"
#include "HbkListItemInterface.h"
#include "HbkCostumeItemBaseWidget.generated.h"

class UImage;
class UOverlay;
class USizeBox;
class UTextBlock;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkCostumeItemBaseWidget : public UHbkCostumeSelectableBaseWidget, public IHbkListItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCostumeStoreSelectDelegate OnBeginOver;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCostumeAllInfo AllCostumeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* ItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USizeBox* InfoArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* PriceText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* NewIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* EquipIconImg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* NewIconOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWrapBox* OwnerPanel;
    
public:
    UHbkCostumeItemBaseWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayUnPurchaseAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPurchaseAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInitPurchaseAnim();
    

    // Fix for true pure virtual functions not being implemented
};

