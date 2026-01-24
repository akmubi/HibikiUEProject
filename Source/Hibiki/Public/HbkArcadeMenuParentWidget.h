#pragma once
#include "CoreMinimal.h"
#include "EHbkArcadeGameModeType.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkArcadeMenuParentWidget.generated.h"

class UAkAudioEvent;
class UBorder;
class UHbkArcadeMenuFrontPageWidget;
class UHbkArcadeMenuRewardPageWidget;
class UHbkButtonWidget;
class UOverlay;
class URetainerBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UHbkArcadeMenuParentWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bisLevelLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bisShowTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OpenAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkArcadeMenuFrontPageWidget* FrontPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URetainerBox* BlockNoiseRetainerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* BasePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* WidgetParentPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* PagePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* InputCoverPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* MostBehindBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBorder* TutorialCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkButtonWidget* ButtonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkArcadeMenuRewardPageWidget> RewardPageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlitchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OpenParentPageSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OpenRewardPageSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BackPageSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* GlitchEffectSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopMenuBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayTime;
    
public:
    UHbkArcadeMenuParentWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void WidgetForceLayoutPrepass();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowArcadeTutorial_BP();
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveWidget();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayBlockNoiseGlitchAnim(bool PlayAnim);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnEndRewardPage(const UHbkArcadeMenuRewardPageWidget* RewardPage);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteAllChallenge(const UHbkArcadeMenuRewardPageWidget* RewardPage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndArcadeTutorial_BP();
    
private:
    UFUNCTION(BlueprintCallable)
    void CreateRewardPage(const EHbkArcadeGameModeType GameModeType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AcceptGameMode_BP(FName LevelName, FName SequenceName);
    
private:
    UFUNCTION(BlueprintCallable)
    void AcceptGameMode(const EHbkArcadeGameModeType GameModeType);
    
};

