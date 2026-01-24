#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoMenuPageBaseWidget.h"
#include "HbkPhotoMenuPage_FilterWidget.generated.h"

class UHbkScrollBox;
class UVerticalBox;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UHbkPhotoMenuPage_FilterWidget : public UHbkPhotoMenuPageBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ListSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* FilterTabNameSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVerticalBox* BackGroundListBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVerticalBox* CharacterListBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVerticalBox* OthersListBox;
    
public:
    UHbkPhotoMenuPage_FilterWidget();

};

