#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AttackFrequencyAdditiveRateParam.h"
#include "AttackNoticeBeginDelegateDelegate.h"
#include "AttackNoticeBeginTutorialDelegateDelegate.h"
#include "AttackNoticeEndDelegateDelegate.h"
#include "AttackNoticeReactionEndDelegateDelegate.h"
#include "AttackNoticeTriggerDelegateDelegate.h"
#include "AudienceModeDelegateDelegate.h"
#include "BossAttackNoticeDelegateDelegate.h"
#include "EHbkAttackRangeType.h"
#include "EHbkEm7500CommandBattleMode.h"
#include "EHbkNote.h"
#include "EHbkRhythmParryInputTutorialType.h"
#include "EmAttackNoticeAdjustLocationDelegateDelegate.h"
#include "EmAttackRepelledDelegate.h"
#include "EmBeginOverkillDelegateDelegate.h"
#include "EmCameraZoomDelegateDelegate.h"
#include "EmCameraZoomEndDelegateDelegate.h"
#include "EmDamagedByPartnerDelegateDelegate.h"
#include "EmDamagedDelegate.h"
#include "EmExAttackHitDelegateDelegate.h"
#include "EmRhythmParryFailedDelegateDelegate.h"
#include "EmToAngerDelegateDelegate.h"
#include "EnemyActionImpactDelegateDelegate.h"
#include "EnemyActionImpactWithTagDelegateDelegate.h"
#include "EnemyAttackInitiationDelegateDelegate.h"
#include "EnemyDamageTagFilterParam.h"
#include "EnemyEndDrainDelegateDelegate.h"
#include "EnemyGroupJoinDelegateDelegate.h"
#include "EnemyRhythmDodgePlayerActionInfo.h"
#include "EnemyRhythmParryCommonParam.h"
#include "EnemySpawnedDelegateDelegate.h"
#include "EnemySpawnedListDelegateDelegate.h"
#include "GrapplingDelegateDelegate.h"
#include "GroupDestroyedDelegateDelegate.h"
#include "HbkEnemySpawnedInfo.h"
#include "HbkGrapplingInfo.h"
#include "HbkGrapplingInfoQueue.h"
#include "KorsicaCircleMoveDelegateDelegate.h"
#include "KorsicaParryStartDelegateDelegate.h"
#include "KorsicaParrySuccessfullDelegateDelegate.h"
#include "OnDeadEnemyDelegateDelegate.h"
#include "RhythmDodgeEndPlayerActionDelegateDelegate.h"
#include "RhythmDodgeStartPlayerActionDelegateDelegate.h"
#include "RhythmParrySuccessfulDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "TngGameSystem.h"
#include "HbkEnemyManager.generated.h"

class AActor;
class AHbkBattleAreaActor;
class AHbkBossAIController;
class AHbkBossCharacterBase;
class AHbkBossStageControllerBase;
class AHbkCharacter;
class AHbkEnemyAIController;
class AHbkEnemyCharacter;
class AHbkManagerAIController;
class AHbkProjectile_Em0821SubArm;
class UAnimSequenceBase;
class UDamageType;
class UDataTable;
class UHbkAdditionalContentsParam;
class UHbkDeadBombDamageParam;
class UHbkEnemyHealthBarManagerWidget;
class UHbkEnemySpawnParamData;
class UHbkStunGaugeManagerWidget;
class UHbkTutorialDataObject_ButtonType;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkEnemyManager : public UTngGameSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeBeginDelegate OnAttackNoticeBegin_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeEndDelegate OnAttackNoticeEnd_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeReactionEndDelegate OnAttackNoticeReactionEnd_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossAttackNoticeDelegate OnBossAttackNoticeBegin_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossAttackNoticeDelegate OnBossAttackNoticeEnd_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmParrySuccessfulDelegate OnRhythmParrySuccessful_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmAttackNoticeAdjustLocationDelegate OnAttackNoticeAdjustLocation_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudienceModeDelegate OnAudienceModeBegin_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudienceModeDelegate OnAudienceModeEnd_Delegate;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnedDelegate OnSpawnedEnemy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnedDelegate OnDynamicSpawnedEnemy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyGroupJoinDelegate OnJoinedEnemy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnedListDelegate OnSpawnedEnemies;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroupDestroyedDelegate OnDestroyedGroup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyEndDrainDelegate OnEndDrainEnemy_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeadEnemyDelegate OnDeadEnemy_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyActionImpactDelegate OnActionImpact;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyActionImpactWithTagDelegate OnActionImpactWithTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyAttackInitiationDelegate OnAttackInitiation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmAttackRepelled OnAttackRepelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmDamaged OnPostTakeDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmDamagedByPartnerDelegate OnEnemyDamagedByPartner_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmExAttackHitDelegate OnEnemyExAttackHit_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmToAngerDelegate OnEnemyToAnger_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmCameraZoomDelegate OnEnemyCameraStart_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmCameraZoomEndDelegate OnEnemyCameraEnd_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmRhythmParryFailedDelegate OnEnemyRhythmParryFailed_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmBeginOverkillDelegate OnEnemyBeginOverkill_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmDodgeStartPlayerActionDelegate OnRhythmDodgeStartPlayerAction_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmDodgeEndPlayerActionDelegate OnRhythmDodgeEndPlayerAction_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeBeginTutorialDelegate OnBeginTutorialByRhythmParry_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeTriggerDelegate OnAttackNoticeTrigger_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKorsicaCircleMoveDelegate OnKorsicaCircleMove;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKorsicaParrySuccessfullDelegate OnKorsicaParrySuccessfull;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKorsicaParryStartDelegate OnKorsicaParryStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrapplingDelegate OnAcceptedGrappling;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrapplingDelegate OnBeginGrappling;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrapplingDelegate OnEndGrappling;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrapplingDelegate OnAbortGrappling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DropItemByDamageTag_DT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EnemyDefaultParameter_DT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EnemySpawnGroupSet_DT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EnemySpawnByEm0570_DT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkManagerAIController> DefaultManagerAIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyDamageTagFilterParam> DamageTagFilterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyRhythmParryCommonParam RhythmParryCommonParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RhythmParryCoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultAttackableCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultAttackRequestRejectCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> AttackCoolTimeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackFrequencyAdditiveRateParam AttackFrequencyAdditiveParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkDeadBombDamageParam* DamageTypeForPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkDeadBombDamageParam* DamageTypeForEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkAdditionalContentsParam* AdditionalParamsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGrapplingInfoQueue> ApplyGrapplingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGrapplingInfo GrapplingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGrapplingInfo OverrideGrapplingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOverrideAnimCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOverrideAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOverrideAnimTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkBossStageControllerBase> StageController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkStunGaugeManagerWidget> StunGaugeMngWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkEnemyHealthBarManagerWidget> HealthBarMngWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEnemySpawnedInfo> EnemySpawnedInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHbkEnemySpawnParamData> SpawnParamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialDataObject_ButtonType> RhythmParryRepelledInputUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialDataObject_ButtonType> RhythmParryDodgeInputUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> RhythmParryShowedAnimationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EHbkRhythmParryInputTutorialType> RhythmParryShowedTutorialTypeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RhythmParryFailedCheckCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RhythmParryFailedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LongRangeAttackCoolTimeNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkManagerAIController> ManagerAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AHbkEnemyCharacter>> LoadedEnemyClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AHbkEnemyAIController>> LoadedEnemyAIClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAngryEnemyExist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAudienceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OverrideDamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName TempGroupSetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AdditionalCameraTargetActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkProjectile_Em0821SubArm> wpSteelSubArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkStunGaugeManagerWidget* StunGaugeManagerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkEnemyHealthBarManagerWidget* HealthBarManagerWidget;
    
public:
    UHbkEnemyManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SuspendEnemyBattle(UObject* WorldContextObject, bool bActivateInhibitController, FName GroupName);
    
    UFUNCTION(BlueprintCallable)
    void SubarmSteel(AHbkProjectile_Em0821SubArm* SubarmActor);
    
    UFUNCTION(BlueprintCallable)
    bool StartUntilStartedGrappling(const AHbkCharacter* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool StartGrappling(const AHbkCharacter* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartCommandBattleAgainstKale(UObject* WorldContextObject, EHbkEm7500CommandBattleMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SkipRhythmParryInputTutorial();
    
    UFUNCTION(BlueprintCallable)
    void SetRhythmParryFailedCountMax();
    
    UFUNCTION(BlueprintCallable)
    void SetIsLongRangeAttackPermitSystemEnable(bool SystemEnable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetInvincibleFromChaiEnemyAll(UObject* WorldContextObject, bool isInvincibleFromChai);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyAILogicEnable(bool Enable, int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableOverrideDamageReaction(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableDeathTouch(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDeadBombDamageInfo(bool isEnableForEnemy, bool isEnableForPlayer);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCollisionResponses(UObject* WorldContextObject, bool IsEnableTakeDamage, bool isEnableReplusion, FName GroupName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetBattleStateEnemyAll(UObject* WorldContextObject, bool BattleStateEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackableCount(int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    void SetAngerEnemyExist(bool Exist);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResumeEnemyBattle(UObject* WorldContextObject, bool bDeactivateInhibitController, FName GroupName);
    
    UFUNCTION(BlueprintCallable)
    void ResetAttackableCount();
    
    UFUNCTION(BlueprintCallable)
    bool RequestPerformMove(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    bool RequestPerformAttack(AHbkEnemyCharacter* Attacker, AHbkEnemyAIController* EnemyAI, bool IsInterrupt);
    
    UFUNCTION(BlueprintCallable)
    bool RequestGrappling(const FHbkGrapplingInfo& NewGrapplingInfo);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCameraTargetActor(AActor* RemoveTargetActor);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseSteelSubarm(FVector ReleaseLocation);
    
    UFUNCTION(BlueprintCallable)
    void RegisterStageController(AHbkBossStageControllerBase* InStageController);
    
    UFUNCTION(BlueprintCallable)
    void PreIdleEnemyReadyToFight(bool AiEnableOnly);
    
    UFUNCTION(BlueprintCallable)
    bool PlayRhythmAttack();
    
    UFUNCTION(BlueprintCallable)
    void PermitDisableLongRangeAttack(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    void OnStartGameoverSequencer();
    
    UFUNCTION(BlueprintCallable)
    void OnRhythmDodgeStartPlayerAction(FEnemyRhythmDodgePlayerActionInfo& PlayerActionInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnRhythmDodgeEndPlayerAction();
    
    UFUNCTION(BlueprintCallable)
    void OnPrepareBattle();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNextBeatUntilStartedGrappling(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnNextBeatStartGrappling(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnNextBeatOverrideGrapplingTarget(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnNextBeatOverrideGrapplingOwner(int32 NoteCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHologramAppearEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnHologramAppearBegin(const FName GroupName);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyRhythmParryFailed(AHbkEnemyCharacter* Attacker);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyBeginOverkillState(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyAngerCamZoomUpEnd(AHbkEnemyCharacter* Attacker);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyAngerCamZoomUpBegin(AHbkEnemyCharacter* Attacker);
    
    UFUNCTION(BlueprintCallable)
    void OnEndBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnDuringPrepare();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnBeatEvent(int32 NoteCount, bool downBeat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSuspendAiByGroup(FName GroupName);
    
    UFUNCTION(BlueprintCallable)
    bool IsSpawnedGroup(const FName& GroupName);
    
    UFUNCTION(BlueprintCallable)
    bool IsSpawnedEnemy(int32 EnemyId);
    
    UFUNCTION(BlueprintCallable)
    bool IsRunningGrappling(const AHbkCharacter* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayRhythmAttack();
    
    UFUNCTION(BlueprintCallable)
    bool IsPermitLongRangeAttackEnable(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    bool IsExistCharacterAroundLocation(FVector Location, bool Distby2D);
    
    UFUNCTION(BlueprintCallable)
    bool IsDestroyedGroup(const FName& GroupName);
    
    UFUNCTION(BlueprintCallable)
    bool IsDestroyedEnemy(int32 EnemyId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsCommandBattleSuccessfulKale(UObject* WorldContextObject, EHbkEm7500CommandBattleMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAngerEnemyExist() const;
    
    UFUNCTION(BlueprintCallable)
    AHbkEnemyCharacter* GetSubEnemyKorsicaJamcombo(AHbkEnemyCharacter* MainTarget);
    
    UFUNCTION(BlueprintCallable)
    AHbkProjectile_Em0821SubArm* GetSteeledSubarm();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkBossStageControllerBase* GetStageController() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSpawnedEnemyList(TArray<AHbkEnemyAIController*>& EnemyAIList, TArray<AHbkEnemyCharacter*>& EnemyPawnList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRhythmparryCoolTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable)
    AHbkManagerAIController* GetManagerAIController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetJoiningGroupMemberCount(AHbkEnemyAIController* CharacterAI) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGroupEnemyRangeTypeCount(EHbkAttackRangeType RangeType, AHbkEnemyAIController* CharacterAI) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCombatEnemyCount(const FVector& Pos, float CombatRange, bool bIncludingNonCambat) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkBossCharacterBase* GetBossCharacter(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkBossAIController* GetBossAI(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    AHbkBattleAreaActor* GetActiveBattleAreaActor();
    
    UFUNCTION(BlueprintCallable)
    void EnemyStatusToAnger(AHbkEnemyCharacter* Attacker, FVector TargetLocation, bool bIsKeepCurrentLocAndRot);
    
    UFUNCTION(BlueprintCallable)
    void EnemyRhythmAttackReactionEnd();
    
    UFUNCTION(BlueprintCallable)
    void EnemyExAttackHit(AHbkEnemyCharacter* Attacker, UAnimSequenceBase* PlayerReactAnim, FVector TargetLocation, bool bIsKeepCurrentLocAndRot);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EndRTKaleBattle(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void CancelApplyGrappling(const AHbkCharacter* Owner);
    
    UFUNCTION(BlueprintCallable)
    void CallOnRhythmParryTutorialEnd();
    
    UFUNCTION(BlueprintCallable)
    void ApplyGrappling(const FHbkGrapplingInfo& NewGrapplingInfo);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyDamageGrappling(TSubclassOf<UDamageType> DamageTypeClass);
    
    UFUNCTION(BlueprintCallable)
    void AddCameraTargetActor(AActor* NewTargetActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActiveVFXBasicFireworkWithTimerRekka(UObject* WorldContextObject, EHbkNote NoteType, float NoteCount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivateEnemyAll(UObject* WorldContextObject, AActor* Activator);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivateBattleAreaActor(UObject* WorldContextObject, bool bActivate, AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    bool AcceptApplyGrappling(const AHbkCharacter* Owner, AHbkCharacter* Target);
    
};

