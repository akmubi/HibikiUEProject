#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "EHbkMGRhythmTower_BossBonusType.h"
#include "HbkGameplayTask_MGRhythmTower.generated.h"

class UHbkGameplayTask_MGRhythmTower;
class UHbkGameplayTask_MGRhythmTowerBattle;
class UHbkGameplayTask_MGRhythmTowerInformationSign;
class UHbkGameplayTask_MGRhythmTowerLoadLevel;
class UHbkGameplayTask_MGRhythmTowerPopupTimer;
class UHbkGameplayTask_MGRhythmTowerPrepare;
class UHbkGameplayTask_MGRhythmTowerResult;
class UHbkGameplayTask_MGRhythmTowerSound;
class UHbkGameplayTask_MGRhythmTowerTextAnimation;
class UHbkGameplayTask_MGRhythmTowerTutorial;
class UHbkMGRhythmTower_DataAsset;
class UHbkRhythmTowerPopupWidget;
class UHbkRhythmTowerTimerWidget;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_MGRhythmTower : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGameplayTask_MGRhythmTowerDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_MGRhythmTowerDelegate OnPostLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_MGRhythmTowerDelegate OnShowTutorial;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_MGRhythmTowerDelegate OnInteractedKorsicaTutorial;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_MGRhythmTowerDelegate OnPrepareStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_MGRhythmTowerDelegate OnPrepareEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_MGRhythmTowerDelegate OnBattleStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_MGRhythmTowerDelegate OnBattleEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_MGRhythmTowerDelegate OnResultTutorial;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_MGRhythmTowerDelegate OnRhythmTowerAutoSave;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_MGRhythmTowerLoadLevel* pRTLoadLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_MGRhythmTowerBattle* pRTBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_MGRhythmTowerPopupTimer* pRTPopupTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_MGRhythmTowerInformationSign* pRTInformationSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_MGRhythmTowerSound* pRTSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkGameplayTask_MGRhythmTowerTextAnimation*> pTextObjArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_MGRhythmTowerPrepare* pRTPrepare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_MGRhythmTowerTutorial* pRTTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_MGRhythmTowerResult* pRTResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkRhythmTowerTimerWidget* pTimerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkRhythmTowerPopupWidget* pPopupWidget;
    
public:
    UHbkGameplayTask_MGRhythmTower(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartRhythmTower(FName LevelName, FName SoundName);
    
    UFUNCTION(BlueprintCallable)
    void ShowRhythmTowerTimer();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_MGRhythmTower* RhythmTowerTask(UObject* WorldContextObject, UHbkMGRhythmTower_DataAsset* DataAsset, FName DebugLevelName, FName DebugSoundName);
    
    UFUNCTION(BlueprintCallable)
    void ResumeRhythmTowerGame();
    
    UFUNCTION(BlueprintCallable)
    void PauseRhythmTowerGame(bool StopScore);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStartGameOverWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnStartGameOver();
    
    UFUNCTION(BlueprintCallable)
    void OnRhythmTowerRetry();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedForFade();
    
public:
    UFUNCTION(BlueprintCallable)
    void HideRhythmTowerTimer();
    
    UFUNCTION(BlueprintCallable)
    void FinishTutorial();
    
    UFUNCTION(BlueprintCallable)
    void FinishRhythmTowerBossBattle();
    
    UFUNCTION(BlueprintCallable)
    void FinishKorsicaTutorial();
    
    UFUNCTION(BlueprintCallable)
    void BeginRhythmTowerBossBattle();
    
    UFUNCTION(BlueprintCallable)
    void BeginRhythmTowerBattle();
    
    UFUNCTION(BlueprintCallable)
    void AddRhythmTowerBossBonus(EHbkMGRhythmTower_BossBonusType BonusType);
    
};

