#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "BossCommandBattleBeginDelegateDelegate.h"
#include "BossCommandBattleDelegateDelegate.h"
#include "BossCommandBattleEndDelegateDelegate.h"
#include "BossCommandBattleInputResultDelegateDelegate.h"
#include "BossCommandBattlePreBeginDelegateDelegate.h"
#include "BossCommandBattleResultDelegateDelegate.h"
#include "BossCommandBattleSetupDelegateDelegate.h"
#include "EHbkBossCommandBattleResult.h"
#include "EHbkEm6000CommandBattleMode.h"
#include "EHbkEm6000CommandBattleProcess.h"
#include "HbkBossCommandBattleCommand.h"
#include "HbkEm6000CommandBattleBasicParameter.h"
#include "HbkEm6000CommandBattleCommandEffect.h"
#include "HbkEm6000CommandBattleCommandInfo.h"
#include "HbkEm6000CommandBattleCommandInput.h"
#include "HbkEm6000CommandBattleParameter.h"
#include "HbkEm6000CommandBattleUpdateParam.h"
#include "HbkEm6000NoteTime.h"
#include "Templates/SubclassOf.h"
#include "HbkEm6000_CommandBattleControl.generated.h"

class AHbkEm6000_Roquefort;
class AHbkEm6000_StageController;
class UAkAudioEvent;
class UAkComponent;
class UHbkBossCommandScoreBarWidget;
class UHbkEm6000_CommandBattleParameterAsset;
class UHbkRhythmSynchroComponent;
class UHbkRhythmSynchroSignalComponent;
class UHbkST10BossRhythmGameGaugeWidget;
class UParticleSystem;

UCLASS(Blueprintable)
class AHbkEm6000_CommandBattleControl : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossCommandBattleDelegate OnBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossCommandBattleDelegate OnEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossCommandBattleSetupDelegate OnSetupCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossCommandBattlePreBeginDelegate OnInputPreBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossCommandBattleBeginDelegate OnInputBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossCommandBattleEndDelegate OnInputEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossCommandBattleInputResultDelegate OnInputResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossCommandBattleResultDelegate OnResult;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_StageController> StageController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_Roquefort> OwnerBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkEm6000_CommandBattleParameterAsset* Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm6000CommandBattleMode CommandBattleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000CommandBattleBasicParameter BasicParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000CommandBattleUpdateParam StandardParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000CommandBattleUpdateParam CommandParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkBossCommandBattleResult CommandBattleResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommandIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommandMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm6000CommandBattleCommandInfo> CommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm6000CommandBattleCommandInput> InputCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm6000CommandBattleCommandEffect> EffectCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBossCommandBattleCommand> BattleCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm6000CommandBattleProcess Process;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProcessNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> InputActionBindingHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000NoteTime BeginNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000NoteTime InputReceptionNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000NoteTime CommandBattleNoteForPhase3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000NoteTime CommandBattleNoteForPhase6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000NoteTime InputCommandNoteForPhase3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000NoteTime InputCommandNoteForPhase6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000NoteTime RetryNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000NoteTime EffectNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000NoteTime AttackAnimationNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInputPartner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInputPartnerSuccessed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInputPartnerFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimationProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimationProgressMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimationProgressCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimationProgressCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputPartnerSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InputPartnerOffsetDrawLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTimeForSuccessPlayerReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTimeForFailedPlayerReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTimeForSuccessTornadoReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInputCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSimpleRestart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnterAnimationCalled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttackAnimationCalled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnablePartnerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkBossCommandScoreBarWidget> BarWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHbkBossCommandScoreBarWidget> BarWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkST10BossRhythmGameGaugeWidget> GaugeWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHbkST10BossRhythmGameGaugeWidget> GaugeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UParticleSystem*> ParticleSystemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkAudioEvent*> AudioEventList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RhythmSynchro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroSignalComponent* RhythmSynchroSignal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
public:
    AHbkEm6000_CommandBattleControl(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TestProcessInit();
    
    UFUNCTION(BlueprintCallable)
    void TestProcessEnd();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCommandBattleMode(EHbkEm6000CommandBattleMode InCommandBattleMode);
    
    UFUNCTION(BlueprintCallable)
    void ResetCommandBattle();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSimpleRestart();
    
    UFUNCTION(BlueprintCallable)
    void OnInputPartner();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputPartnerSuccessed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputPartnerFail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputPartner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkEm6000CommandBattleProcess GetProcess() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkEm6000CommandBattleParameter GetParameter() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void EnablePlayerMode(EHbkEm6000CommandBattleMode InCommandBattleMode);
    
    UFUNCTION(BlueprintCallable)
    void DisablePlayerMode();
    
    UFUNCTION(BlueprintCallable)
    bool CommandBattleStart();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnJustInputSuccess(const FHbkEm6000CommandBattleCommandInput& Param);
    
};

