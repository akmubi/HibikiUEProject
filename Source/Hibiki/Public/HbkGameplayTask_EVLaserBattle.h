#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_EVLaserBattle.generated.h"

class UHbkGameplayTask_EVLaserBattle;
class UHbkGameplayTask_EVLaserBattleFillingEnemy;
class UHbkGameplayTask_EVLaserBattleSettingsDataAsset;
class UHbkGameplayTask_QuickBattleStart;
class UHbkPlayerInterpMove;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVLaserBattle : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGameplayTask_EVLaserBattleSuppliedEnemyDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGameplayTask_EVLaserBattleDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLaserBattleDelegate OnEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLaserBattleDelegate OnSurvive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLaserBattleDelegate OnEscape;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLaserBattleSuppliedEnemyDelegate OnSuppliedEnemy;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_EVLaserBattleSettingsDataAsset* SettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_QuickBattleStart* BattleStartTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPlayerInterpMove* PlayerInterpMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_EVLaserBattleFillingEnemy* FillingEnemyLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_EVLaserBattleFillingEnemy* FillingEnemyRight;
    
public:
    UHbkGameplayTask_EVLaserBattle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartMagnetFocalSettings();
    
    UFUNCTION(BlueprintCallable)
    void PlayBeginBattle();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSuppiliedEnemy();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMoveEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnJumpToEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnBattleBegun();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVLaserBattle* EventLaserBattle(UObject* WorldContextObject, UHbkGameplayTask_EVLaserBattleSettingsDataAsset* NewSettingsData);
    
    UFUNCTION(BlueprintCallable)
    void EndMagnetFocalSettings();
    
    UFUNCTION(BlueprintCallable)
    void End();
    
};

