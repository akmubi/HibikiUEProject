#pragma once
#include "CoreMinimal.h"
#include "HbkBNetAgreementsModalWidget.h"
#include "HbkBNetUpdatedAgreementModalWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetUpdatedAgreementModalWidget : public UHbkBNetAgreementsModalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PostTextBlock;
    
public:
    UHbkBNetUpdatedAgreementModalWidget();

};

