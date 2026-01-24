#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_EVCannonBattle.generated.h"

class AHbkEnemyCharacter;
class UHbkGameplayTask_EVCannonBattle;
class UHbkGameplayTask_EVCannonBattleInfiniteInfo;
class UHbkGameplayTask_EVCannonBattleSettingsDataAsset;
class UHbkRooftopCannonBarWidget;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVCannonBattle : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGameplayTask_EVCannonBattleDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVCannonBattleDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVCannonBattleDelegate OnDefendTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVCannonBattleDelegate OnFirstRespawnEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVCannonBattleDelegate OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVCannonBattleDelegate OnResultEnded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkGameplayTask_EVCannonBattleInfiniteInfo*> InfiniteInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkRooftopCannonBarWidget* pCannonWidget;
    
public:
    UHbkGameplayTask_EVCannonBattle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartCannonBattle();
    
    UFUNCTION(BlueprintCallable)
    void RemoveCannonWidget();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSyncQuarter(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnResultEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnBattleBegun();
    
public:
    UFUNCTION(BlueprintCallable)
    AHbkEnemyCharacter* GetFirstRespawnedEnemy();
    
    UFUNCTION(BlueprintCallable)
    void FinishProgressCannonWidget();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVCannonBattle* EventCannonBattle(UObject* WorldContextObject, UHbkGameplayTask_EVCannonBattleSettingsDataAsset* SettingsData);
    
    UFUNCTION(BlueprintCallable)
    void EndCannonBattle();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCannonWidget();
    
    UFUNCTION(BlueprintCallable)
    void CreateCannonWidget();
    
    UFUNCTION(BlueprintCallable)
    void ActivateCannonWidget();
    
};

