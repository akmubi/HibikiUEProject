#pragma once
#include "CoreMinimal.h"
#include "Animation/WidgetAnimation.h"
#include "HbkWindowBaseWidget.h"
#include "HbkAchievementsWidget.generated.h"

class UAkAudioEvent;
class UHbkAchievementsCommonBackgroundWidget;
class UHbkAchievementsHoldDownButtonWidget;
class UHbkAchievementsInformationPanelWidget;
class UHbkAchievementsListItemWidget;
class UHbkAchievementsListWidget;
class UHbkAchievementsTabListWidget;
class UHbkAchievementsWallPaintingWidget;
class UHbkButtonBaseWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkAchievementsWidget : public UHbkWindowBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ChangeSoundState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RestoreSoundState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OpenSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloseSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ChangeViewModeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* GetRewardSuccessSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkAchievementsCommonBackgroundWidget* CommonBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkAchievementsTabListWidget* AchievementTabList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkAchievementsListWidget* AchievementList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkAchievementsHoldDownButtonWidget* GetAllRewardsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkAchievementsInformationPanelWidget* InformationPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkAchievementsWallPaintingWidget* WallPainting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OpenAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ToViewAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ToListAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent OnFinishMoveAnimationDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkAchievementsListItemWidget* SelectListItem;
    
public:
    UHbkAchievementsWidget();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateInformation(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAutoSaveGameOnHideOut();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHoldDownCompletedGetAllRewardsButton(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishMoveAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedTabListItem(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedGetRewardButton(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void AfterGetAllRewards();
    
};

