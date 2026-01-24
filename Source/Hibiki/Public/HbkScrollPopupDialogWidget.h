#pragma once
#include "CoreMinimal.h"
#include "HbkPopupDialogWidget.h"
#include "HbkScrollPopupDialogWidget.generated.h"

class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkScrollPopupDialogWidget : public UHbkPopupDialogWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeedRate;
    
public:
    UHbkScrollPopupDialogWidget();

};

