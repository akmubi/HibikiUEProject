#pragma once
#include "CoreMinimal.h"
#include "Animation/WidgetAnimation.h"
#include "EHbkHideOutChallengeCategory.h"
#include "HbkNoticePopupWidgetInterface.h"
#include "HbkUserWidget.h"
#include "HbkAchievementsProgressNotificationWidget.generated.h"

class UImage;
class UPanelWidget;
class UTextBlock;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkAchievementsProgressNotificationWidget : public UHbkUserWidget, public IHbkNoticePopupWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowPopupTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkHideOutChallengeCategory, TSoftObjectPtr<UTexture2D>> CategoryIconTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ProgressNumText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ProgressMaxText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ProgressBarArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CategoryIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HideAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CompleteAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent OnFinishShowAnimationDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent OnFinishHideAnimationDelegate;
    
public:
    UHbkAchievementsProgressNotificationWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnFinishShowAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishLoadCategoryIconTexture();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishHideAnimation();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void OnFinishWidget() override PURE_VIRTUAL(OnFinishWidget,);
    
};

