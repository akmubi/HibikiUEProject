#pragma once
#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameplayTagContainer.h"
#include "Animation/WidgetAnimation.h"
#include "EHbkHUDFollowDevice.h"
#include "EHbkPartnerType.h"
#include "EHbkPlayerAppendAbilityType.h"
#include "EHbkReverbGaugeConsumeType.h"
#include "HbkHealthBarBaseWidget.h"
#include "HbkHealthBarWidget.generated.h"

class AHbkPartnerCharacterBase;
class AHbkPlayerCharacterBase;
class AHbkPlayerController;
class UHbkPartnerGaugeAlignmentWidget;
class UHorizontalBox;
class UOverlay;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkHealthBarWidget : public UHbkHealthBarBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkPlayerController> Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeforeHealthGrowthCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isHealthGrowth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GrowEffect_70;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GrowEffect_80;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GrowEffect_90;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GrowEffect_100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GrowEffect_110;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GrowEffect_120;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GrowEffect_130;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GrowEffect_140;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GrowEffect_150;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GrowEffect_160;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GrowEffect_170;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GrowEffect_180;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GrowEffect_190;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GrowEffect_200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEasingFunc::Type> EasingMainHealthType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EasingMainHealthTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeathblowGaugeNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEasingFunc::Type> EasingMainDeathblowGaugeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EasingMainDeathblowGaugeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RhythmLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHealthChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHealthHeel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDeathblowGaugeChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ReverbGaugeBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPartnerGaugeAlignmentWidget* PartnerGauges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SwapSPGaugeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SwapSPGaugeAnim_GrowthOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSwapGrowthTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SPGrowthAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* SPBar_Front_OutLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* SPBar_Back_OutLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* GamePad_SPIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* KeyboardAndMouse_SPIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isGrowing;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent FinishedSwapSPGaugeAnimationDelegate;
    
public:
    UHbkHealthBarWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UseDeathblowGauge(EHbkReverbGaugeConsumeType ConsumeType);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateReverbeGauge();
    
    UFUNCTION(BlueprintCallable)
    void UpdateHealthGauge();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchSpAttackUsableAnim_BP(bool isUsable);
    
    UFUNCTION(BlueprintCallable)
    void SwitchReverbOutLineVisible();
    
    UFUNCTION(BlueprintCallable)
    void SwapSPGauge();
    
    UFUNCTION(BlueprintCallable)
    void StartRespawn();
    
    UFUNCTION(BlueprintCallable)
    void StartHealthHeel(float Value);
    
    UFUNCTION(BlueprintCallable)
    void StartHealthDamage(float Value);
    
    UFUNCTION(BlueprintCallable)
    void StartDeathblowGauge();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSpAttackData(int32 SlotIndex, const TArray<FGameplayTag>& SpAttackTagList);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetReverbeGaugeData();
    
    UFUNCTION(BlueprintCallable)
    void SetOverChargeData();
    
    UFUNCTION(BlueprintCallable)
    void SetLifeTankData();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHPRateAnim_BP(int32 GrowthNum);
    
    UFUNCTION(BlueprintCallable)
    void SetHealthBarData();
    
    UFUNCTION(BlueprintCallable)
    void SelectPartner(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RhythmTimming(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void RhythmNotBestTiming();
    
    UFUNCTION(BlueprintCallable)
    void RhythmBestTiming(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void ReturnPartner(int32 Index, AHbkPartnerCharacterBase* Partner);
    
public:
    UFUNCTION(BlueprintCallable)
    void Receive_OnChangeSpecialAttack(int32 SlotIndex, const FGameplayTag& SpAttackTag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySE_ConsumeOverCharge();
    
    UFUNCTION(BlueprintCallable)
    void PlayReactAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOverChargeGetAnim(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void ParrySuccess();
    
    UFUNCTION(BlueprintCallable)
    void ParryPerfect();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLatestFollowDeviceChanged(EHbkHUDFollowDevice LatestDeviceType);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedSwapSPGaugeAnimation();
    
    UFUNCTION(BlueprintCallable)
    void LearnedAbility(EHbkPlayerAppendAbilityType AbilityType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitPartnerGauge();
    
private:
    UFUNCTION(BlueprintCallable)
    void InitOverCharge();
    
protected:
    UFUNCTION(BlueprintCallable)
    void GrowthReverbGauge();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNextSPGaugeGrowth();
    
    UFUNCTION(BlueprintCallable)
    void EndBattle();
    
    UFUNCTION(BlueprintCallable)
    void DeathblowButtonOn();
    
    UFUNCTION(BlueprintCallable)
    void DeathblowButtonOff();
    
private:
    UFUNCTION(BlueprintCallable)
    void CreateLifeTank(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeOverCharge(int32 Count);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckSwapSPGauge();
    
    UFUNCTION(BlueprintCallable)
    void ChangeRhythmRank(int32 NewRank, int32 OldRank);
    
    UFUNCTION(BlueprintCallable)
    void ChangeDrawDeathblowGage();
    
    UFUNCTION(BlueprintCallable)
    void ChangeDrawCharSelect();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharacter(AHbkPlayerCharacterBase* NewPlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void CallPartner(int32 Index, AHbkPartnerCharacterBase* Partner);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetGaugeGrowData(float Gauge1Rate, float Gauge2Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnUpdatePartnerGauge(EHbkPartnerType Type, float GaugeRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnStartHeel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnStartDeathblowGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnStartDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSetDrawDeathblowGage(bool IsDraw);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSetDrawCharSelect(bool IsDraw);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSelectPartner(int32 PartnerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnRhythmTimming(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnRhythmNotBestTiming();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnRhythmBestTiming(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnReturnPartner(int32 PartnerIndex, AHbkPartnerCharacterBase* Partner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnRespawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnParrySuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnParryPerfect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEndHeel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEndDeathblowGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEndDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEndBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnDeathblowButtonOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnDeathblowButtonOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnChangeRhythmRank(int32 NewRank, int32 OldRank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnChangeInhibitSpecialAction(bool Inhibit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnChangeInhibitPartnerAction(bool Inhibit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnChangeHealth(float Rate, float NowHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnChangeCharacter(AHbkPlayerCharacterBase* NewPlayerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnCallPartner(int32 PartnerIndex, AHbkPartnerCharacterBase* Partner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBeginBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBeatHitSuccess();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BeginBattle();
    
    UFUNCTION(BlueprintCallable)
    void BeatHitSuccess();
    
private:
    UFUNCTION(BlueprintCallable)
    void AccumlateLifeTanks(const TArray<float>& LifeTankRateList);
    
    UFUNCTION(BlueprintCallable)
    void AccumlatedLifeTankData(int32 Index);
    
};

