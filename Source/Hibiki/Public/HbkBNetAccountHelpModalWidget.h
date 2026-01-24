#pragma once
#include "CoreMinimal.h"
#include "HbkBNetModalBaseWidget.h"
#include "HbkBNetAccountHelpModalWidget.generated.h"

class UHbkBNetLinkButtonWidget;
class UHbkBNetSolidButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetAccountHelpModalWidget : public UHbkBNetModalBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetLinkButtonWidget* UsernameOrPasswordHelpButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetLinkButtonWidget* OtherHelpButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetSolidButtonWidget* BackButtonWidget;
    
public:
    UHbkBNetAccountHelpModalWidget();

};

