#pragma once
#include "CoreMinimal.h"
#include "EHbkCostumeModelRotationMode.h"
#include "EHbkCostumePageName.h"
#include "EHbkCostumePart.h"
#include "EHbkPartnerType.h"
#include "HbkUserWidget.h"
#include "HbkCostumeStoreWidget.generated.h"

class AHbkCostumeModelController;
class UAkAudioEvent;
class UHbkButtonBaseWidget;
class UHbkChaiCostumePartWidget;
class UHbkCostumeItemListParentWidget;
class UHbkCostumeModelDrawWidget;
class UHbkInventoryObject_Costume;
class UHbkStoreCommonBackgroundWidget;
class UHbkStoreCommonPurchaseCommandWidget;
class UOverlay;
class USizeBox;
class UTextBlock;
class UTexture;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkCostumeStoreWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkButtonBaseWidget* ToStoreButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkButtonBaseWidget* ToEquipButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloseCategorySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeItemListParentWidget* CostumeList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* CaiPartsSelectBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHbkChaiCostumePartWidget*> ChaiCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHbkCostumePart> PartList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkChaiCostumePartWidget* Hair_Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkChaiCostumePartWidget* Inner_Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkChaiCostumePartWidget* Jacket_Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkChaiCostumePartWidget* Scarf_Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkChaiCostumePartWidget* Bottoms_Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkChaiCostumePartWidget* Shoes_Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkChaiCostumePartWidget* RobotArm_Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkChaiCostumePartWidget* Accessory_Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkChaiCostumePartWidget* SetUp_Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkChaiCostumePartWidget* Guiter_Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CostumeNameBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CostumePrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreCommonPurchaseCommandWidget* PurchaseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreCommonBackgroundWidget* CmnHeaderFooterWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* StorePreviewArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* EquipPreviewArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeModelDrawWidget* ModelDrawWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* ModelBGTexture;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 EquipModelPosition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 StoreModelPosition;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SelectModeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* InAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SelectCategoryAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SelectItemAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotaionAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrevModelDelayTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkInventoryObject_Costume* PrevCostume;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkCostumePageName NowPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkCostumeModelRotationMode ModelRotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkCostumeModelController> CostumeModelController;
    
public:
    UHbkCostumeStoreWidget();

    UFUNCTION(BlueprintCallable)
    void UpChaiPart();
    
    UFUNCTION(BlueprintCallable)
    void ToStorePage(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void ToEquipPage(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void SelectItemDirect(int32 Index);
    
private:
    UFUNCTION(BlueprintCallable)
    void PurchaseCostume();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayToStorePageAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayToEquipPageAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPurchaseSE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOpenSE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDecideSE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCloseSE();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHoldDownCompletedPurchaseButton(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void ModelRotation(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishChangePage();
    
private:
    UFUNCTION(BlueprintCallable)
    void EquipCostume();
    
public:
    UFUNCTION(BlueprintCallable)
    void DownChaiPart();
    
    UFUNCTION(BlueprintCallable)
    void DirectSelectionChaiPart(UHbkChaiCostumePartWidget* CategoryWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    void DecideReleaseModelRotation();
    
public:
    UFUNCTION(BlueprintCallable)
    void DecideReleaseAction();
    
private:
    UFUNCTION(BlueprintCallable)
    void DecideModelRotation(EHbkCostumeModelRotationMode RotationMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void DecideHOLDAction();
    
    UFUNCTION(BlueprintCallable)
    void DecideAction();
    
    UFUNCTION(BlueprintCallable)
    void ChangeForm();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharaDirect(EHbkPartnerType CharaType);
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeChara(int32 AddIndex);
    
};

