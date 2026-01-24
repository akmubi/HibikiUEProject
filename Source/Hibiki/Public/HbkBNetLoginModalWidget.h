#pragma once
#include "CoreMinimal.h"
#include "HbkBNetAccountExistsModalWidget.h"
#include "HbkBNetLoginModalWidget.generated.h"

class UHbkBNetHollowButtonWidget;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetLoginModalWidget : public UHbkBNetAccountExistsModalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetHollowButtonWidget* CreateAccountButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* SubheaderOverlay;
    
public:
    UHbkBNetLoginModalWidget();

};

