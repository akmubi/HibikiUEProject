#pragma once
#include "CoreMinimal.h"
#include "EnemyRhythmDodgePlayerActionInfo.h"
#include "HbkBossStageControllerBase.h"
#include "HbkEm4000RecoveryInfoFromTKEV.h"
#include "KorsicaVersusTalkDelegate.h"
#include "HbkEm4000_StageController.generated.h"

class AActor;
class ACameraActor;
class UAkAudioEvent;
class UAnimSequenceBase;
class UDataTable;

UCLASS(Blueprintable)
class AHbkEm4000_StageController : public AHbkBossStageControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKorsicaVersusTalk KorsicaTalk900_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKorsicaVersusTalk KorsicaTalk901_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKorsicaVersusTalk KorsicaTalkEnd_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKorsicaVersusTalk KorsicaTalkChai900_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKorsicaVersusTalk KorsicaTalkChai901_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKorsicaVersusTalk KorsicaTalkChaiEnd_Delegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MoveBasePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* KorsicaVersusCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* KorsicaVersusDieCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* KorsicaVersusTalkCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* KorsicaAttackBasePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LightChangeSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> GameOverTalkData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCircleMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isExecDieCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPermitStartAnimCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CircleMoveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm4000RecoveryInfoFromTKEV> RecoveryInfoFromTKEV;
    
public:
    AHbkEm4000_StageController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SuppressPlayerInput(bool IsSuppress);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartAnimCameraCheckPermit();
    
    UFUNCTION(BlueprintCallable)
    void SetKorsicaBattleResultType();
    
    UFUNCTION(BlueprintCallable)
    void SetFightHudVisible(bool bVisible);
    
private:
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmDodgeStart(const FEnemyRhythmDodgePlayerActionInfo& PlayerDodgeActionInfo);
    
    UFUNCTION(BlueprintCallable)
    void Receive_KorsicaCircleMove(bool bIsCircleMove, UAnimSequenceBase* PlayerAction, float PlayRate);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitEventBasePoint();
    
    UFUNCTION(BlueprintCallable)
    float GetRhythmParrySuccessRatio();
    
    UFUNCTION(BlueprintCallable)
    void EntryEvPoint();
    
    UFUNCTION(BlueprintCallable)
    void CheckRhythmParrySuccessRate();
    
    UFUNCTION(BlueprintCallable)
    void AddjustKorsicaPos();
    
};

