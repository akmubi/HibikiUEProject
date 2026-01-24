#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EHbkSpectraBattleConditionType.h"
#include "EHbkSpectraBattleEndReason.h"
#include "HbkBattleResultDetail.h"
#include "HbkBattleResultScoreDetail.h"
#include "SpectraBattleFinishDelegateDelegate.h"
#include "SpectraBattleRankDelegateDelegate.h"
#include "SpectraNotifyBattleDelegateDelegate.h"
#include "HbkSpectraBattleController.generated.h"

class AActor;
class AController;
class AHbkCharacter;
class AHbkEnemyAIController;
class AHbkEnemyCharacter;
class UAnimSequenceBase;
class UDamageType;
class UDataTable;
class UHbkSpectraBattleParentWidget;

UCLASS(Blueprintable)
class UHbkSpectraBattleController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpectraBattleFinishDelegate SpectraBattleFinishDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpectraNotifyBattleDelegate BeginBattleDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpectraNotifyBattleDelegate BeginResultDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpectraBattleRankDelegate TotalRankEndRecord;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpectraNotifyBattleDelegate EndBattleDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpectraNotifyBattleDelegate FailedBattleDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpectraNotifyBattleDelegate BattleBegunDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SpectraBattleDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkSpectraBattleParentWidget> SpectraBattleUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkSpectraBattleConditionType, FText> ConditionTextMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkSpectraBattleParentWidget* SpectraBattleWidget;
    
public:
    UHbkSpectraBattleController();

    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Termination();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SupplyEnemyCompleted();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartBattleGroup(FName EnemyGroupName);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerResetTransform(FTransform ResetTransform);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReceivePlayerDied();
    
    UFUNCTION(BlueprintCallable)
    void ReceivePlayerDamage();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveEnemyOverkill(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveEnemyDamage(AHbkEnemyCharacter* EnemyPawn, float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveEndedScoreRecord(const FHbkBattleResultDetail& ResultDetail, const FHbkBattleResultScoreDetail& ScoreDetail, const FHbkBattleResultScoreDetail& JustTimingDetail, const FHbkBattleResultScoreDetail& TimeDetail);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveBeginBattle();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveAttackRepelled(AHbkEnemyCharacter* EnemyPawn, const AHbkCharacter* Blocker);
    
    UFUNCTION(BlueprintCallable)
    void OnEndAttackNotice(AHbkEnemyCharacter* Attacker, bool IsParrySuccessful, UAnimSequenceBase* PlayerAction);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginAttackNotice();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEnemyDied(AHbkEnemyCharacter* EnemyPawn, AHbkCharacter* CauserPawn);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsBattleChallengePossible();
    
    UFUNCTION(BlueprintCallable)
    void InitializeByName(FName FindName);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(int32 StIndex);
    
    UFUNCTION(BlueprintCallable)
    void EndProcess(EHbkSpectraBattleEndReason BattleEndReason);
    
    UFUNCTION(BlueprintCallable)
    void DecideGiveup();
    
    UFUNCTION(BlueprintCallable)
    void DecideContinue();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BattleResultEnded();
    
};

