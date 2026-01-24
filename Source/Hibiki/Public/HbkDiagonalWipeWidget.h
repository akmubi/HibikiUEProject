#pragma once
#include "CoreMinimal.h"
#include "Animation/WidgetAnimation.h"
#include "EHbkScreenWipeType.h"
#include "EHbkTalkFadeFunc.h"
#include "HbkUserWidget.h"
#include "HbkDiagonalWipeWidget.generated.h"

class UCurveFloat;
class UImage;
class UOverlay;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkDiagonalWipeWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* OverlayVTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* OverlayVBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Bottom;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AnimationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent FinishedCurrentAnimationDelegate;
    
public:
    UHbkDiagonalWipeWidget();

    UFUNCTION(BlueprintCallable)
    void StartAnimation(UWidgetAnimation* Animation, EHbkScreenWipeType Type, EHbkTalkFadeFunc FadeFuncType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedCurrentAnimation();
    
};

