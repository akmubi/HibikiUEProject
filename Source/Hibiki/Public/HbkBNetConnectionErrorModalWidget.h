#pragma once
#include "CoreMinimal.h"
#include "HbkDialogWidget.h"
#include "HbkBNetConnectionErrorModalWidget.generated.h"

class UAkAudioEvent;
class UHbkBNetHollowButtonWidget;
class UHbkBNetModalBaseWidget;
class UHbkBNetSolidButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetConnectionErrorModalWidget : public UHbkDialogWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SelectSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetModalBaseWidget* ModalWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetSolidButtonWidget* BackButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetHollowButtonWidget* CancelButtonWidget;
    
public:
    UHbkBNetConnectionErrorModalWidget();

};

