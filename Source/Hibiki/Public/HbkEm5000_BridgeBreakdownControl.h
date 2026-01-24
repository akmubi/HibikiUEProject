#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Camera/PlayerCameraManager.h"
#include "BossCommandBattleBeginDelegateDelegate.h"
#include "BossCommandBattleDelegateDelegate.h"
#include "BossCommandBattleEndDelegateDelegate.h"
#include "BossCommandBattleInputResultDelegateDelegate.h"
#include "BossCommandBattlePreBeginDelegateDelegate.h"
#include "BossCommandBattleSetupDelegateDelegate.h"
#include "EHbkEm5000BridgeBreakdownAction.h"
#include "EHbkEm5000BridgeBreakdownCamera.h"
#include "EHbkEm5000BridgeBreakdownProcess.h"
#include "Em5000BridgeBreakdownControlChangePopularityDelegateDelegate.h"
#include "HbkBossCommandBattleCommand.h"
#include "HbkEm5000BridgeBasicParameter.h"
#include "HbkEm5000BridgeBreakdownActionInfo.h"
#include "HbkEm5000BridgeBreakdownAudioEventList.h"
#include "HbkEm5000BridgeBreakdownCommandInfo.h"
#include "HbkEm5000BridgeBreakdownCommandInput.h"
#include "HbkEm5000BridgeParameter.h"
#include "HbkEm5000NoteTime.h"
#include "Templates/SubclassOf.h"
#include "HbkEm5000_BridgeBreakdownControl.generated.h"

class AHbkCameraActor;
class AHbkEm5000_Mimosa;
class AHbkEm5000_StageController;
class AHbkEnemyAIController;
class AHbkEnemyCharacter;
class AHbkEnemySpawner;
class UAkAudioEvent;
class UAkComponent;
class UAkRtpc;
class UHbkBossCommandScoreBarWidget;
class UHbkEm5000_BridgeParameterAsset;
class UHbkRhythmSynchroComponent;
class UHbkRhythmSynchroSignalComponent;
class UHbkST08DanceBattleGaugeWidget;

UCLASS(Blueprintable)
class AHbkEm5000_BridgeBreakdownControl : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossCommandBattleDelegate OnBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossCommandBattleDelegate OnEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm5000BridgeBreakdownControlChangePopularityDelegate OnChangePopularity;
    
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
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm5000_StageController> StageController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm5000_Mimosa> OwnerBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkEm5000_BridgeParameterAsset* Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BossStandingLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator BossStandingRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerStandingLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PlayerStandingRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NowPopularity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionPopularity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubtractionPopularity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PopularitySuperiorRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PopularityInferiorRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000BridgeBasicParameter BasicParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm5000BridgeBreakdownCommandInfo> CommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm5000BridgeBreakdownCommandInfo> GuiterCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm5000BridgeBreakdownCommandInput> InputCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBossCommandBattleCommand> BattleCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommandIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputCommandIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommandMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm5000BridgeBreakdownProcess Process;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProcessNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShrinkedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreNoteTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreNoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreAddNoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreShrinkedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPreSetupCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputCommandNoteTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputCommandNoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputCommandAddNoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputCommandShrinkedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInputCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> InputActionBindingHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm5000BridgeBreakdownAction DanceAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHbkEm5000BridgeBreakdownAction> ActionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm5000BridgeBreakdownActionInfo> ActionInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000NoteTime DemonstrationNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000NoteTime JudgmentNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000NoteTime GameOverNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000NoteTime SetupCommandNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000NoteTime InputCommandNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSimpleRestart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CallSignList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputCommandSuccessRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextPhaseIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEnemySpawner> EnemySpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AHbkEnemyCharacter>> Enemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkCameraActor> CameraActor_ShowMimosa;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkCameraActor> CameraActor_ShowPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AkIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkAudioEvent*> AudioEventList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm5000BridgeBreakdownAudioEventList> InputAudioEventList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* RTPC_Cheers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RTPCString_Cheers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkBossCommandScoreBarWidget> BridgeWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHbkBossCommandScoreBarWidget> BridgeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkST08DanceBattleGaugeWidget> GaugeWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHbkST08DanceBattleGaugeWidget> GaugeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RhythmSynchro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroSignalComponent* RhythmSynchroSignal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* SubAkComponent;
    
public:
    AHbkEm5000_BridgeBreakdownControl(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TestProcessEnd();
    
    UFUNCTION(BlueprintCallable)
    void TestProcessBegin();
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnEnemy();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawnedEnemies(TArray<AHbkEnemyCharacter*> SpawnEnemies);
    
    UFUNCTION(BlueprintCallable)
    void OnSimpleRestart();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEndSt08Ev5000_81Event(bool IsSkipped);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndAction(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameOver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkEm5000BridgeBreakdownProcess GetProcess() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkEm5000BridgeParameter GetParameter() const;
    
public:
    UFUNCTION(BlueprintCallable)
    float GetElapsedTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHbkBossCommandBattleCommand> GetBattleCommand() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyEnemy();
    
    UFUNCTION(BlueprintCallable)
    void ChangePlayerMode(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMimosaMode(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void ChangeEndProcess();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCamera(EHbkEm5000BridgeBreakdownCamera Type, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBeginProcess();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnJustInputSuccess(const FHbkEm5000BridgeBreakdownCommandInput& Param);
    
public:
    UFUNCTION(BlueprintCallable)
    void AdjustLocation();
    
};

