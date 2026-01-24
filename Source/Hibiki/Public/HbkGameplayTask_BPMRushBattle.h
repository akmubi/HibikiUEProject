#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkPlayingLevelSeqInfo.h"
#include "HbkGameplayTask_BPMRushBattle.generated.h"

class AHbkBPMRushController;
class AHbkCharacter;
class AHbkEnemyCharacter;
class UDamageType;
class UHbkBPMRushDifficultySettingsDataAsset;
class UHbkBPMRushSettingsDataAsset;
class UHbkGameplayTask_BattleStart;
class UHbkGameplayTask_ScreenTransition;
class UHbkGameplayTask_SupplyEnemy;

UCLASS(Blueprintable)
class UHbkGameplayTask_BPMRushBattle : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndBattleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBattleBegunDelegate, bool, bFirst);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleBegunDelegate OnBattleBegun;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleDelegate OnSuccessBattle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleDelegate OnFailBattle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkBPMRushController* BPMRushController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkBPMRushSettingsDataAsset* SettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkBPMRushDifficultySettingsDataAsset* DifficultySettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_BattleStart* BattleStartTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_SupplyEnemy* SupplyEnemyTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_ScreenTransition* ScreenTransitionTask;
    
public:
    UHbkGameplayTask_BPMRushBattle(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void WaitBeginBattle(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void SuppiliedEnemyGroup();
    
    UFUNCTION(BlueprintCallable)
    void StartLevelSequence(const FHbkPlayingLevelSeqInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void StartEnemySupplyCamera(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void RhythmGaugeChangePoint(float ChangeValue);
    
    UFUNCTION(BlueprintCallable)
    void RestoreEnemySupplyCamera();
    
    UFUNCTION(BlueprintCallable)
    void PostEnemySupplyCamera();
    
    UFUNCTION(BlueprintCallable)
    void PlayerRhythmParryPerfect();
    
    UFUNCTION(BlueprintCallable)
    void PlayerRhythmParryGood();
    
    UFUNCTION(BlueprintCallable)
    void PlayerRhythmJustTiming(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void PlayerParrySuccess();
    
    UFUNCTION(BlueprintCallable)
    void PlayerParryPerfect();
    
    UFUNCTION(BlueprintCallable)
    void PlayerParryCounter();
    
    UFUNCTION(BlueprintCallable)
    void PlayerHealthDamage(float Value);
    
    UFUNCTION(BlueprintCallable)
    void PlayerEndSpecialAttack();
    
    UFUNCTION(BlueprintCallable)
    void PlayerEndJamComboAttack();
    
    UFUNCTION(BlueprintCallable)
    void PlayerDodgeCounter();
    
    UFUNCTION(BlueprintCallable)
    void PlayerDamageConfirmed();
    
    UFUNCTION(BlueprintCallable)
    void PlayerBeginSpecialAttack(bool bIncludingCamera);
    
    UFUNCTION(BlueprintCallable)
    void PlayerBeginJamComboAttack();
    
    UFUNCTION(BlueprintCallable)
    void PlayerAttackGaveDamage(const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void PartnerAttackGaveDamage(const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void FinishAppearEnemyGaugePerformance();
    
    UFUNCTION(BlueprintCallable)
    void EnemyStartRhythmParry();
    
    UFUNCTION(BlueprintCallable)
    void EnemyRhythmParrySuccessful(AHbkEnemyCharacter* EnemyPawn, bool bIsParryAllPerfectr);
    
    UFUNCTION(BlueprintCallable)
    void EnemyEndRhythmParry();
    
    UFUNCTION(BlueprintCallable)
    void EndLevelSequence(const FHbkPlayingLevelSeqInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void EndEnemySupplyCamera();
    
    UFUNCTION(BlueprintCallable)
    void DuringEnemySupplyCamera();
    
    UFUNCTION(BlueprintCallable)
    void DeadEnemy(AHbkEnemyCharacter* EnemyPawn, AHbkCharacter* CauserPawn);
    
    UFUNCTION(BlueprintCallable)
    void ComboCountUp(int32 ComboCount, bool bScoreBonus);
    
    UFUNCTION(BlueprintCallable)
    void ComboCountClear();
    
    UFUNCTION(BlueprintCallable)
    void ChangeEnemySupplyCamera();
    
    UFUNCTION(BlueprintCallable)
    void BeatHitSuccess();
    
    UFUNCTION(BlueprintCallable)
    void BeatHitPerfect();
    
    UFUNCTION(BlueprintCallable)
    void BattleBegun();
    
};

