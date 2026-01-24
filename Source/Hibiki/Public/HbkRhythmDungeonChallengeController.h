#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EHbkRhythmDungeonChallengeController_ShopState.h"
#include "HbkRhythmDungeonVendingMachineChallengeGroup.h"
#include "HbkRhythmDungeonChallengeController.generated.h"

class AActor;
class AHbkCharacter;
class AHbkEnemyCharacter;
class AHbkNp0600_RD_SecretBox;
class AHbkRDNp0900_HintRobo;
class ATargetPoint;
class UHbkGameplayTask_SupplyEnemySomeGroup;
class UHbkRhythmDungeonChallengeInfiniteSupply;

UCLASS(Blueprintable)
class UHbkRhythmDungeonChallengeController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_SupplyEnemySomeGroup* SupplyEnemyTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkRDNp0900_HintRobo> SpawnHintRobot;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> SpawnCleanRobot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkRhythmDungeonVendingMachineChallengeGroup> SpawnVendingMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkNp0600_RD_SecretBox> SpawnTreasureChest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkRhythmDungeonChallengeInfiniteSupply*> InfiniteSupplyList;
    
public:
    UHbkRhythmDungeonChallengeController();

protected:
    UFUNCTION(BlueprintCallable)
    void SupplyEnemyEnd();
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnChallengeVendingMachine(TArray<ATargetPoint*> Point);
    
    UFUNCTION(BlueprintCallable)
    void SpawnChallengeTreasureChest(FTransform Trans);
    
    UFUNCTION(BlueprintCallable)
    void SpawnChallengeKaleStatue(FTransform Trans);
    
    UFUNCTION(BlueprintCallable)
    void SpawnChallengeCleanRobot(FTransform Trans);
    
    UFUNCTION(BlueprintCallable)
    void SetTreasureChestShopState(EHbkRhythmDungeonChallengeController_ShopState State);
    
    UFUNCTION(BlueprintCallable)
    void SetTreasureChestShopStandby();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDisableAttackVendingMachine();
    
    UFUNCTION(BlueprintCallable)
    void OnWaveStart();
    
    UFUNCTION(BlueprintCallable)
    void OnPrepareBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnPostLoad();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerHealthZero();
    
    UFUNCTION(BlueprintCallable)
    void OnExitHintRobo();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageConfirmed();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageByPartner(AHbkEnemyCharacter* Victim, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnChallengeFailed();
    
    UFUNCTION(BlueprintCallable)
    void OnBattleBegun();
    
    UFUNCTION(BlueprintCallable)
    void OnAttackRepelled(AHbkEnemyCharacter* EnemyPawn, const AHbkCharacter* Blocker);
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptCloseButton();
    
    UFUNCTION(BlueprintCallable)
    void EnemyRhythmParryStartEvent();
    
    UFUNCTION(BlueprintCallable)
    void EnemyRhythmParryEndEvent();
    
    UFUNCTION(BlueprintCallable)
    void EnemyDeadEvent(AHbkEnemyCharacter* EnemyPawn, AHbkCharacter* CauserPawn);
    
    UFUNCTION(BlueprintCallable)
    void EndedFinishSlow();
    
    UFUNCTION(BlueprintCallable)
    void DestroyVendingMachine(const int32 Index, const AActor* DamageCauser, AActor* Victim);
    
    UFUNCTION(BlueprintCallable)
    void DestroyRobot();
    
public:
    UFUNCTION(BlueprintCallable)
    void DestroyChallengeVendingMachine();
    
    UFUNCTION(BlueprintCallable)
    void DestoryTreasureChest();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BeginFinishSlow();
    
};

