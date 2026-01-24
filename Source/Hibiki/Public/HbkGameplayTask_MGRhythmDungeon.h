#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "EHbkMGRhythmDungeon_TutorialType.h"
#include "HbkGameplayTask_MGRhythmDungeon.generated.h"

class AActor;
class UHbkGameplayTask_MGRhythmDungeon;
class UHbkGameplayTask_MGRhythmDungeonBattle;
class UHbkGameplayTask_MGRhythmDungeonChaos;
class UHbkGameplayTask_MGRhythmDungeonDialog;
class UHbkGameplayTask_MGRhythmDungeonInformationSign;
class UHbkGameplayTask_MGRhythmDungeonLoadLevel;
class UHbkGameplayTask_MGRhythmDungeonResult;
class UHbkGameplayTask_MGRhythmDungeonSoundChange;
class UHbkMGRhythmDungeon_DataAsset;
class UHbkRhythmDungeonChallengeController;
class UHbkRhythmDungeonDebug;
class UHbkRhythmDungeonPopupWidget;
class UHbkRhythmDungeonStartWidget;
class UHbkRhythmDungeonStoreWidget;
class UObject;
class URhythmDungeonBattleWidget;

UCLASS(Blueprintable)
class UHbkGameplayTask_MGRhythmDungeon : public UGameplayTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_MGRhythmDungeonLoadLevel* pRDLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_MGRhythmDungeonBattle* pRDBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_MGRhythmDungeonSoundChange* pRDSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkGameplayTask_MGRhythmDungeonChaos*> pRDChaos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkRhythmDungeonChallengeController* pRDChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_MGRhythmDungeonInformationSign* pRDInformationSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_MGRhythmDungeonDialog* pRDDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_MGRhythmDungeonResult* pRDResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkRhythmDungeonDebug* pRDDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkRhythmDungeonStartWidget* pStartWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkRhythmDungeonPopupWidget* pPopupWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URhythmDungeonBattleWidget* pTimerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkRhythmDungeonStoreWidget* pStoreWidget;
    
public:
    UHbkGameplayTask_MGRhythmDungeon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartGame();
    
    UFUNCTION(BlueprintCallable)
    void SetEndTutorial(EHbkMGRhythmDungeon_TutorialType Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_MGRhythmDungeon* RhythmDungeonTask(UObject* WorldContextObject, UHbkMGRhythmDungeon_DataAsset* DataAsset);
    
    UFUNCTION(BlueprintCallable)
    void OpenShop(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnYesDialog();
    
    UFUNCTION(BlueprintCallable)
    void OnYesDebugChallengeJump();
    
    UFUNCTION(BlueprintCallable)
    void OnStartGameOverWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnStartGameOverSequence();
    
    UFUNCTION(BlueprintCallable)
    void OnStartGameOver();
    
    UFUNCTION(BlueprintCallable)
    void OnRhythmDungeonRetry();
    
    UFUNCTION(BlueprintCallable)
    void OnReturnToHideout();
    
    UFUNCTION(BlueprintCallable)
    void OnPostLoad();
    
    UFUNCTION(BlueprintCallable)
    void OnNoDialog();
    
    UFUNCTION(BlueprintCallable)
    void OnNewGame(bool bHardcoreMode);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedFade();
    
    UFUNCTION(BlueprintCallable)
    void OnEndWaveSign();
    
    UFUNCTION(BlueprintCallable)
    void OnEndShop(UHbkRhythmDungeonStoreWidget* pWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnEndScoreSign();
    
    UFUNCTION(BlueprintCallable)
    void OnEndDebugShop(UHbkRhythmDungeonStoreWidget* pWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnContinue(bool bHardcoreMode);
    
    UFUNCTION(BlueprintCallable)
    void OnChallengeSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnChallengeFailedDialog();
    
    UFUNCTION(BlueprintCallable)
    void OnChallengeFailed();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelShop(UHbkRhythmDungeonStoreWidget* pWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelDebugShop(UHbkRhythmDungeonStoreWidget* pWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnBeforeUnLoad();
    
public:
    UFUNCTION(BlueprintCallable)
    void NextWave();
    
    UFUNCTION(BlueprintCallable)
    bool IsEndTutorial(EHbkMGRhythmDungeon_TutorialType Type);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRhythmDungeonWaveNum();
    
    UFUNCTION(BlueprintCallable)
    FName GetChallengeTypeName();
    
    UFUNCTION(BlueprintCallable)
    void EndBattle();
    
    UFUNCTION(BlueprintCallable)
    void End();
    
    UFUNCTION(BlueprintCallable)
    void BeginBattle();
    
};

