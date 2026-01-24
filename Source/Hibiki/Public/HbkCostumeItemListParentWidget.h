#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerType.h"
#include "HbkUserWidget.h"
#include "HbkCostumeItemListParentWidget.generated.h"

class UHbkCostumeChaiItemListWidget;
class UHbkCostumeCharacterTabWidget;
class UHbkCostumePartnerItemListWidget;
class UHbkCostumeStoreWidget;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkCostumeItemListParentWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeCharacterTabWidget* CharacterTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ListSwicher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeChaiItemListWidget* ChaiItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumePartnerItemListWidget* PartnerItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeStoreWidget* OwnerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SelectCategoryAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SelectItemAnim;
    
public:
    UHbkCostumeItemListParentWidget();

    UFUNCTION(BlueprintCallable)
    void PlayItemSelectAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayCategorySelectAnim();
    
    UFUNCTION(BlueprintCallable)
    bool ChangeCharacterDirect(EHbkPartnerType CharaType);
    
};

