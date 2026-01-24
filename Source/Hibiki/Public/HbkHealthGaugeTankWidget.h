#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkHealthGaugeTankWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkHealthGaugeTankWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GetAnim;
    
public:
    UHbkHealthGaugeTankWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTankChargedNum(float ChargedNum);
    
    UFUNCTION(BlueprintCallable)
    void PlayGetAnim();
    
};

