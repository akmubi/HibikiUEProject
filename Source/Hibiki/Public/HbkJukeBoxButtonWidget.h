#pragma once
#include "CoreMinimal.h"
#include "HbkButtonBaseWidget.h"
#include "HbkJukeBoxButtonActionDelegate.h"
#include "HbkJukeBoxButtonWidget.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, EditInlineNew)
class UHbkJukeBoxButtonWidget : public UHbkButtonBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkJukeBoxButtonAction PushButtonEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PushSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HoveredSound;
    
public:
    UHbkJukeBoxButtonWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ReceivePushEvent();
    
};

