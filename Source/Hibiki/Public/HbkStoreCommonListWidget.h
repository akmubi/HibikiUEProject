#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkStoreCommonListWidget.generated.h"

class UDataTable;
class UHbkListControlWidget;
class UHbkStoreCommonListItemWidget;
class UPanelWidget;
class UScrollBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStoreCommonListWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkStoreCommonListItemWidget> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RTProductDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ListScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ScrollArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
public:
    UHbkStoreCommonListWidget();

private:
    UFUNCTION(BlueprintCallable)
    void AutoScroll(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
};

