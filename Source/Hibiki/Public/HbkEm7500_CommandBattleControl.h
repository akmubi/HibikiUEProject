#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BossCommandBattleBeginDelegateDelegate.h"
#include "BossCommandBattleDelegateDelegate.h"
#include "BossCommandBattleEndDelegateDelegate.h"
#include "BossCommandBattleInputResultDelegateDelegate.h"
#include "BossCommandBattlePreBeginDelegateDelegate.h"
#include "BossCommandBattleResultDelegateDelegate.h"
#include "BossCommandBattleSetupDelegateDelegate.h"
#include "EHbkBossCommandBattleResult.h"
#include "EHbkEm7500CommandBattleMode.h"
#include "EHbkEm7500CommandBattleProcess.h"
#include "HbkBossCommandBattleCommand.h"
#include "HbkEm7500CommandBattleBasicParameter.h"
#include "HbkEm7500CommandBattleCommandInfo.h"
#include "HbkEm7500CommandBattleCommandInput.h"
#include "HbkEm7500CommandBattleParameter.h"
#include "HbkEm7500CommandBattleUpdateParam.h"
#include "HbkEm7500NoteTime.h"
#include "Templates/SubclassOf.h"
#include "HbkEm7500_CommandBattleControl.generated.h"

class AHbkEm7500_StageController;
class UAkAudioEvent;
class UAkComponent;
class UHbkBossCommandScoreBarWidget;
class UHbkEm7500_CommandBattleParameter;
class UHbkRhythmSynchroComponent;
class UHbkRhythmSynchroSignalComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm7500_CommandBattleControl : public AActor {
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
    TWeakObjectPtr<AHbkEm7500_StageController> StageController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkEm7500_CommandBattleParameter* Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm7500CommandBattleMode CommandBattleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500CommandBattleBasicParameter BasicParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500CommandBattleUpdateParam StandardParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500CommandBattleUpdateParam CommandParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkBossCommandBattleResult CommandBattleResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkEm7500CommandBattleMode, EHbkBossCommandBattleResult> CommandBattleResultList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommandIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommandMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500CommandBattleCommandInfo> CommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500CommandBattleCommandInput> InputCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBossCommandBattleCommand> BattleCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm7500CommandBattleProcess Process;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProcessNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> InputActionBindingHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500NoteTime BeginNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500NoteTime InputCommandNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500NoteTime CommandBattleNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInputCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkBossCommandScoreBarWidget> BarWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHbkBossCommandScoreBarWidget> BarWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkAudioEvent*> AudioEventList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RhythmSynchro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroSignalComponent* RhythmSynchroSignal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
public:
    AHbkEm7500_CommandBattleControl(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TestProcessPeppermint();
    
    UFUNCTION(BlueprintCallable)
    void TestProcessMacaron();
    
    UFUNCTION(BlueprintCallable)
    void TestProcessKorsica();
    
    UFUNCTION(BlueprintCallable)
    void TestProcessChaiAnd808();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCommandBattleMode(EHbkEm7500CommandBattleMode InCommandBattleMode);
    
    UFUNCTION(BlueprintCallable)
    void ResetCommandBattle();
    
    UFUNCTION(BlueprintCallable)
    bool IsCommandBattleSuccessful(EHbkEm7500CommandBattleMode InCommandBattleMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkEm7500CommandBattleProcess GetProcess() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkEm7500CommandBattleParameter GetParameter() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool CommandBattleStart();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnJustInputSuccess(const FHbkEm7500CommandBattleCommandInput& Param);
    
};

