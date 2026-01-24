#pragma once
#include "CoreMinimal.h"
#include "EHbkStoreMenuType.h"
#include "HbkListItemBaseWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkStoreMenuSelectButtonWidget.generated.h"

class UHbkStoreMenuBaseWidget;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStoreMenuSelectButtonWidget : public UHbkListItemBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkStoreMenuType MenuType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkStoreMenuBaseWidget> MenuWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NewIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Locked;
    
public:
    UHbkStoreMenuSelectButtonWidget();

};

