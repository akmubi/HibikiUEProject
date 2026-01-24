#pragma once
#include "CoreMinimal.h"
#include "HbkBNetModalBaseWidget.h"
#include "HbkBNetQuickAccountModalWidget.generated.h"

class UHbkBNetBorderlessButtonWidget;
class UHbkBNetFieldWidget;
class UHbkBNetHollowButtonWidget;
class UHbkBNetSolidButtonWidget;
class UHbkBNetTooltipWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetQuickAccountModalWidget : public UHbkBNetModalBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetFieldWidget* EmailAddressFieldWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetBorderlessButtonWidget* AccountAgreementsButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetSolidButtonWidget* CreateAccountButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetHollowButtonWidget* CancelButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetHollowButtonWidget* LoginButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetTooltipWidget* AutofillTooltipWidget;
    
public:
    UHbkBNetQuickAccountModalWidget();

};

