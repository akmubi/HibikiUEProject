#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkPhotoMenuPageBaseWidget.generated.h"

class UHbkListControlWidget;
class UHbkPhotoMenuItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHbkPhotoMenuPageBaseWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkPhotoMenuItemWidget> ListItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
public:
    UHbkPhotoMenuPageBaseWidget();

};

