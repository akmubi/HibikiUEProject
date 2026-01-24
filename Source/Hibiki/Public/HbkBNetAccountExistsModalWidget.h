#pragma once
#include "CoreMinimal.h"
#include "HbkBNetModalBaseWidget.h"
#include "HbkBNetAccountExistsModalWidget.generated.h"

class UHbkBNetBorderlessButtonWidget;
class UHbkBNetFieldWidget;
class UHbkBNetHollowButtonWidget;
class UHbkBNetSolidButtonWidget;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetAccountExistsModalWidget : public UHbkBNetModalBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetFieldWidget* UsernameFieldWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetFieldWidget* PasswordFieldWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetBorderlessButtonWidget* AccountAgreementsButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetSolidButtonWidget* LoginButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetHollowButtonWidget* CancelButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetBorderlessButtonWidget* AccountHelpButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ErrorOverlay;
    
public:
    UHbkBNetAccountExistsModalWidget();

};

