#pragma once
#include "CoreMinimal.h"
#include "EHbkInventoryPlayerItemCategory.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkComboItemDisplayWidget.generated.h"

class UHbkComboItemBaseWidget;
class UHbkComboItemCellWidget;
class UHbkComboItemHeaderWidget;
class UHbkListControlWidget;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkComboItemDisplayWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkComboItemHeaderWidget> HeaderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkComboItemCellWidget> CellClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkInventoryPlayerItemCategory, FText> HeaderTextMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ListViewArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkComboItemBaseWidget> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
public:
    UHbkComboItemDisplayWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OpenCloseAnimEnd();
    
};

