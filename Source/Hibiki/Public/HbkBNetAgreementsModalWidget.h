#pragma once
#include "CoreMinimal.h"
#include "HbkBNetModalBaseWidget.h"
#include "HbkBNetAgreementsModalWidget.generated.h"

class UHbkBNetHollowButtonWidget;
class UHbkBNetSolidButtonWidget;
class UHbkBNetVScrollBoxWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetAgreementsModalWidget : public UHbkBNetModalBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetSolidButtonWidget* ContinueButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetHollowButtonWidget* CancelButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BodyTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetVScrollBoxWidget* BodyVScrollBox;
    
public:
    UHbkBNetAgreementsModalWidget();

};

