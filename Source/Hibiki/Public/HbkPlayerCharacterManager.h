#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BossRhythmAttackParam.h"
#include "EHbkBeatHitType.h"
#include "EHbkBossCommandBattleResult.h"
#include "EHbkJoinedPartnerFlag.h"
#include "EHbkPartnerType.h"
#include "EHbkPlayerAppendAbilityType.h"
#include "EnemyRhythmDodgePlayerActionInfo.h"
#include "HbkAssistCharacterInfo.h"
#include "HbkBeatHitUIInfo.h"
#include "HbkCameraAppendParam.h"
#include "HbkCameraBlendParam.h"
#include "HbkInstantKillInfo.h"
#include "HbkPlayerAbilityInfo.h"
#include "HbkPlayerInventoryInfo.h"
#include "HbkPlayerStateInfo.h"
#include "HbkPlayingLevelSeqInfo.h"
#include "HbkPlayingTalkEventSceneInfo.h"
#include "PCManagerBeatHitNextBeatDelegateDelegate.h"
#include "PCManagerBeatHitResultDelegateDelegate.h"
#include "PCManagerBeatHitStartDelegateDelegate.h"
#include "PCManagerBeginSpecialAttackDelegateDelegate.h"
#include "PCManagerCalledPartnerDelegateDelegate.h"
#include "PCManagerEndSpecialAttackDelegateDelegate.h"
#include "PCManagerEventDelegateDelegate.h"
#include "PCManagerInstantKillDelegateDelegate.h"
#include "PCManagerJamComboDelegateDelegate.h"
#include "PCManagerLearnedAbilityDelegateDelegate.h"
#include "PCManagerMoneyChangeDelegateDelegate.h"
#include "PCManagerPartnerAttackDelegateDelegate.h"
#include "PCManagerPartnerAttackGaveDelegateDelegate.h"
#include "PCManagerPartnerBeginMiniGameDelegateDelegate.h"
#include "PCManagerPartnerCallingDelegateDelegate.h"
#include "PCManagerPartnerEndMiniGameDelegateDelegate.h"
#include "PCManagerPartnerSelectDelegateDelegate.h"
#include "PCManagerPartnerTargetLockonDelegateDelegate.h"
#include "PCManagerPartnerTargetSelectDelegateDelegate.h"
#include "PCManagerPartnerTargetUnLockDelegateDelegate.h"
#include "PCManagerReturnedPartnerDelegateDelegate.h"
#include "PCManagerToRoquefortEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "TngGameSystem.h"
#include "HbkPlayerCharacterManager.generated.h"

class AActor;
class AHbkEnemyCharacter;
class AHbkPartnerCharacterBase;
class AHbkPlayerCharacterBase;
class AHbkRhythmSign;
class UAkCallbackInfo;
class UAnimSequenceBase;
class UDamageType;
class UDataTable;
class UHbkCostumeController;
class UHbkMultiBeatHitParentWidget;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkPlayerCharacterManager : public UTngGameSystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerEventDelegate OnPostPlayerSetup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerEventDelegate OnHealthBarSetUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerEventDelegate OnShowRhythmAssist;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerEventDelegate OnHideRhythmAssist;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerEventDelegate OnJoinedNewPartner;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerCalledPartnerDelegate OnCalledPartner;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerReturnedPartnerDelegate OnReturnedPartner;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerPartnerSelectDelegate OnSelectPartner;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerPartnerCallingDelegate OnCallingPartner;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerPartnerCallingDelegate OnReturningPartner;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerPartnerAttackDelegate OnBeginPartnerAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerPartnerAttackDelegate OnBeginPartnerChargeAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerPartnerBeginMiniGameDelegate OnBeginPartnerMiniGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerPartnerEndMiniGameDelegate OnEndedPartnerMiniGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerPartnerAttackGaveDelegate OnPartnerAttackGaveDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerInstantKillDelegate OnStartInstantKillBeatHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerInstantKillDelegate OnOneBeatInstantKillBeatHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerInstantKillDelegate OnSuccessInstantKillBeatHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerInstantKillDelegate OnFailedInstantKillBeatHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerInstantKillDelegate OnStartInstantKill;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerInstantKillDelegate OnEndInstantKill;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerPartnerTargetLockonDelegate OnLockonPartnerTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerPartnerTargetUnLockDelegate OnUnLockPartnerTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerEventDelegate OnStartSelectPartnerTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerPartnerTargetSelectDelegate OnEndSelectPartnerTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerMoneyChangeDelegate OnChangeMoney;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerMoneyChangeDelegate OnChangePoolMoney;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerBeatHitStartDelegate OnBeatHitStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerBeatHitNextBeatDelegate OnBeatHitNextBeat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerBeatHitResultDelegate OnBeatHitResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerJamComboDelegate OnBeginJamComboAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerJamComboDelegate OnEndJamComboAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerJamComboDelegate OnBeginJamCombo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerJamComboDelegate OnEndJamCombo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerBeginSpecialAttackDelegate OnBeginSpecialAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerEndSpecialAttackDelegate OnEndSpecialAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerLearnedAbilityDelegate OnLearnedAbility;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerEventDelegate OnSuccessEventQTEInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerEventDelegate OnFailedEventQTEInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCManagerToRoquefortEvent OnRoquefortSuccessFinisher;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> PartnerAppearTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> PlayerTransTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAssistCharacterInfo AssistCharacterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkMultiBeatHitParentWidget> BeatHitWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BeatHitTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttackTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AirAttackTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpAttackTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag JamComboTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PartnerAttackTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PartnerAttackLastTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkPlayerAppendAbilityType, FHbkPlayerAbilityInfo> PlayerAbilityInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DefaultSkillTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DefaultAbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DefaultCostumeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SecondCostumeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LowBudgetCosChaiTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LowBudgetCos808Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LowBudgetCosGuitarTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkPlayerStateInfo PlayerStateInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerStatusPresetTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBeatHitUIInfo BeatHitUIInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkInstantKillInfo InstantKillInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkCostumeController> CostumeControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkCostumeController* CostumeController;
    
public:
    UHbkPlayerCharacterManager();

protected:
    UFUNCTION(BlueprintCallable)
    void ToggleRhythmAssistWidget();
    
public:
    UFUNCTION(BlueprintCallable)
    void ThrowMagnetLine(FGameplayTag TargetAgentTag, float HitTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetNotDieMode_VC(UObject* WorldContextObject, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    int32 SetMoney(int32 NewMoney);
    
    UFUNCTION(BlueprintCallable)
    void SetGimmickTimer(float TimeRate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDefaultPlayerStateInfo(UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDebugMoney(const TArray<FString>& Args);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugCircuit(const TArray<FString>& Args);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCameraTransientAppendParam(UObject* WorldContextObject, const FHbkCameraAppendParam& AppendParam, FHbkCameraBlendParam BlendIn, FHbkCameraBlendParam BlendOut, float Duration, int32 Priority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCameraPermanentAppendParam(UObject* WorldContextObject, const FHbkCameraAppendParam& AppendParam, FHbkCameraBlendParam BlendIn);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowQTEInput(bool AllowInput);
    
    UFUNCTION(BlueprintCallable)
    void Set808Visibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SelectPartner(EHbkPartnerType PartnerType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RevertPlayerCostume(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void RevertControlToPlayerCharacter(bool bTeleportMainPlayer);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetPlayerStateStageParam(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void ResetPartnerState(bool bSkipDisappear);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetManager();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetCameraPermanentAppendParam(UObject* WorldContextObject, FHbkCameraBlendParam BlendOut);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Receive_StartSequence(const FHbkPlayingLevelSeqInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void Receive_StartEventScene(const FHbkPlayingTalkEventSceneInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnStartEnemyAttackNotice(AHbkEnemyCharacter* Attacker);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmDodgeStartPlayerAction(const FEnemyRhythmDodgePlayerActionInfo& PlayerDodgeActionInfo);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmDodgeEndPlayerAction();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnPostStartPlay();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnKorsicaParryStart(UAnimSequenceBase* PlayerAction, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnKorsicaMoveStart(bool bIsCircleMove, UAnimSequenceBase* PlayerAction, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnEnemyToAnger(AHbkEnemyCharacter* Attacker, FVector TargetLocation, bool bIsKeepCurrentLocAndRot);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnEnemyExAttackHit(AHbkEnemyCharacter* Attacker, UAnimSequenceBase* PlayerAnim, FVector PlayerLocation, bool bIsKeepCurrentLocAndRot);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnEnemyCameraStart();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnEnemyCameraEnd(bool bEnabledDodgeMode);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnEndEnemyAttackNotice(AHbkEnemyCharacter* Attacker, bool IsParrySuccessful, UAnimSequenceBase* PlayerAction);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnBossRhythmParryStart(AHbkEnemyCharacter* Attacker, FBossRhythmAttackParam InParam);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnBossRhythmParryResult(AHbkEnemyCharacter* Attacker, FBossRhythmAttackParam InParam);
    
public:
    UFUNCTION(BlueprintCallable)
    void Receive_OnBossCommandBattleResult(EHbkBossCommandBattleResult Result);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnBossCommandBattleInputResult(bool bIsPlayerNote, EHbkBossCommandBattleResult Result);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnAudienceModeEnd(bool IsPlayerAudience);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnAudienceModeBegin(bool IsPlayerAudience);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnAttackNoticeReactionEnd();
    
    UFUNCTION(BlueprintCallable)
    void Receive_EndSequence(const FHbkPlayingLevelSeqInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void Receive_EndEventScene(const FHbkPlayingTalkEventSceneInfo& Info);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PlayerTakeItem(UObject* WorldContextObject, const FGameplayTag InventoryId, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerShowItem(const FGameplayTag InventoryId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OverridePlayerCostume(UObject* WorldContextObject, const FGameplayTag SetupCostumeTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerMoveEnded();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnNextSignalBeat(int32 NoteCount, bool bDownBeat);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNextBeatStartJamCombo(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnJamComboTargetPostTakeDamage(const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnEndedPartnerAttack(AHbkPartnerCharacterBase* Partner);
    
    UFUNCTION(BlueprintCallable)
    void OnEndedPartnerAction(AHbkPartnerCharacterBase* Partner);
    
    UFUNCTION(BlueprintCallable)
    void OnEndCallPartnerSound(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDisappearPartner(AHbkPartnerCharacterBase* Partner, bool bIsAction);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseStore();
    
    UFUNCTION(BlueprintCallable)
    void OnCloseCostume();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LearnPlayerAbility(UObject* WorldContextObject, EHbkPlayerAppendAbilityType AbilityType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void JoinedNewPartner(UObject* WorldContextObject, EHbkJoinedPartnerFlag NewPartner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMainPlayerCharacter(AActor* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJustTimingAttackDamageFromTags(const FGameplayTagContainer& AttackTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJustTimingAttackDamage(const UDamageType* DamageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJoinedPartner(EHbkPartnerType PartnerType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDuringPriorityAction() const;
    
    UFUNCTION(BlueprintCallable)
    void InitRDGrowthParameter();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasPlayerAbility(UObject* WorldContextObject, EHbkPlayerAppendAbilityType AbilityType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetViewerTicketNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkRhythmSign* GetRhythmAssistChara() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkPlayerCharacterBase* GetPlayerCharacter(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMoney(bool bCheckPool) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetJoinedPartnerTypeList(TArray<EHbkPartnerType>& PartnerTypeList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkPlayerStateInfo GetHbkPlayerStateInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkPlayerInventoryInfo GetHbkPlayerInventoryInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkPlayerCharacterBase* GetCurrentPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkPartnerCharacterBase* GetCurrentPartnerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCircuitNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAimingTargetCharacterForEnemy() const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateAnotherPlayerCharacter(bool bIsImmediateControl);
    
    UFUNCTION(BlueprintCallable)
    bool ForceCallPartner(EHbkPartnerType PartnerType, AActor* Target, const FGameplayTag& BattleActionTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void External_ExecutePartnerAction(UObject* WorldContextObject, bool bCancel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void External_AbortPartnerMiniGame(UObject* WorldContextObject, bool bCancel);
    
    UFUNCTION(BlueprintCallable)
    void EndMagnetLine();
    
    UFUNCTION(BlueprintCallable)
    void EndGimmickTimer();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DisablePlayersTick(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void DestroyAnotherPlayerCharacter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DebugOpenAllSkills();
    
    UFUNCTION(BlueprintCallable)
    void DebugAddInventory(const TArray<FString>& Args);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Debug_BeginEventBeatHit(UObject* WorldContextObject, EHbkBeatHitType Type);
    
    UFUNCTION(BlueprintCallable)
    void ChangeControlToAnotherPlayerCharacter(FTransform NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void BeginInGameEventQTE(bool bWithInput, FGameplayTag UITargetAgentTag);
    
    UFUNCTION(BlueprintCallable)
    bool BeginGimmickTimer();
    
    UFUNCTION(BlueprintCallable)
    int32 AddViewerTicketNum(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    int32 AddMoney(int32 Add, bool bTakeItem);
    
    UFUNCTION(BlueprintCallable)
    int32 AddCircuitNum(int32 Add);
    
};

