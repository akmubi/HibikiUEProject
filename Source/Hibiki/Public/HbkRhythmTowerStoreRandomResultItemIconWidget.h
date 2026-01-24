#pragma once
#include "CoreMinimal.h"
#include "Animation/WidgetAnimation.h"
#include "HbkUserWidget.h"
#include "HbkRhythmTowerStoreRandomResultItemIconWidget.generated.h"

class UImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmTowerStoreRandomResultItemIconWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LoopAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent OnFinishShowAnimationDelegate;
    
public:
    UHbkRhythmTowerStoreRandomResultItemIconWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnFinishShowAnimation();
    
};

