#pragma once
#include "CoreMinimal.h"
#include "Animation/WidgetAnimation.h"
#include "TngUserWidget.h"
#include "HbkUserWidget.generated.h"

class UHbkGameRuleManager;

UCLASS(Blueprintable, EditInlineNew)
class UHbkUserWidget : public UTngUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDelayOneFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent FinishedInOutAnimationDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestGCOnDestruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabledDefaultConstrainAspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabledPhotoModeChangeVisiblity;
    
public:
    UHbkUserWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnStartedPhotoMode(UHbkGameRuleManager* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedInOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnEndedPhotoMode(UHbkGameRuleManager* Sender);
    
public:
    UFUNCTION(BlueprintCallable)
    void InvalidateViewportWidget();
    
    UFUNCTION(BlueprintCallable)
    void InvalidateCachedWidget();
    
    UFUNCTION(BlueprintCallable)
    void InvalidateAllWidgets();
    
    UFUNCTION(BlueprintCallable)
    void HbkAddToViewport(int32 ZOrder);
    
};

