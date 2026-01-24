#pragma once
#include "CoreMinimal.h"
#include "HbkBNetModalBaseWidget.h"
#include "HbkBNetManagementModalWidget.generated.h"

class UHbkBNetBorderlessButtonWidget;
class UHbkBNetLinkButtonWidget;
class UHbkBNetSolidButtonWidget;
class UTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetManagementModalWidget : public UHbkBNetModalBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetLinkButtonWidget* QuickAccountUsernameButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetLinkButtonWidget* ManageOrUnlinkAccountButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetLinkButtonWidget* OtherHelpButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetBorderlessButtonWidget* AccountAgreementsButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetSolidButtonWidget* BackButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* EmailValueTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* FullAccountUsernameValueTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* FullAccountUsernameVerticalBox;
    
public:
    UHbkBNetManagementModalWidget();

};

