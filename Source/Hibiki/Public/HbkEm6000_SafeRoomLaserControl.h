#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHbkSafeRoomLaserProcess.h"
#include "HbkFloatingLaser.h"
#include "HbkFloatingLaserPoint.h"
#include "HbkLatticeLaser.h"
#include "HbkLatticeLaserPoint.h"
#include "HbkRhythmSynchroSignalCue.h"
#include "Templates/SubclassOf.h"
#include "HbkEm6000_SafeRoomLaserControl.generated.h"

class AHbkEm6000_FloatingLaser;
class AHbkEm6000_LatticeLaser;
class UHbkRhythmSynchroComponent;
class UHbkRhythmSynchroSignalComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AHbkEm6000_SafeRoomLaserControl : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkSafeRoomLaserProcess Process;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProcessNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWaitBarHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitBarHeadNoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLaserEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FloatingLaserNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FloatingLaserAttackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLatticeLaserNoMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFloatingLaserNoAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLatticeLaserSpawnModeRapidFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkLatticeLaser> LatticeLaserList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkFloatingLaser> FloatingLaserList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm6000_LatticeLaser> LatticeLaserClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm6000_FloatingLaser> FloatingLaserClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent_PointABegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent_PointAEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent_PointBBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent_PointBEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent_PointA00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent_PointA01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent_PointA02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent_PointB00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent_PointB01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent_PointB02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkLatticeLaserPoint> LatticeLaserPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkFloatingLaserPoint> FloatingLaserPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroSignalComponent* RhythmSynchroSignalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RhythmSynchro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestSpawnLatticeLaserIndex;
    
public:
    AHbkEm6000_SafeRoomLaserControl(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TestSwitchLatticeLaser();
    
    UFUNCTION(BlueprintCallable)
    void TestSwitchAndMoveLatticeLaser();
    
    UFUNCTION(BlueprintCallable)
    void TestSpawnLatticeLaser();
    
    UFUNCTION(BlueprintCallable)
    void TestSpawnFloatingLaser();
    
    UFUNCTION(BlueprintCallable)
    void TestMoveLatticeLaser();
    
    UFUNCTION(BlueprintCallable)
    void TestDestroyLatticeLaser();
    
public:
    UFUNCTION(BlueprintCallable)
    void SwitchLatticeLaser();
    
    UFUNCTION(BlueprintCallable)
    void SwitchAndMoveLatticeLaser();
    
    UFUNCTION(BlueprintCallable)
    void StartUpFloatingLaser();
    
    UFUNCTION(BlueprintCallable)
    void SpawnLatticeLaser();
    
    UFUNCTION(BlueprintCallable)
    void SetLatticeLaserSpawnModeRapidFire();
    
    UFUNCTION(BlueprintCallable)
    void SetLatticeLaserSpawnModeDefault();
    
    UFUNCTION(BlueprintCallable)
    void SetLatticeLaserNoMove(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatingLaserNoAttack(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableFloatingLaser(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void ResetLaserControl();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSignalEvent(const FHbkRhythmSynchroSignalCue& Cue);
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveLatticeLaser();
    
    UFUNCTION(BlueprintCallable)
    void MoveFloatingLaser();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNeedLatticeLaserSwitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLatticeLaserSpawnModeRapidFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLatticeLaserNoMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistLatticeLaser() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyLatticeLaserAll();
    
    UFUNCTION(BlueprintCallable)
    bool DestroyLatticeLaser(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ChangePointIndex(int32 Index);
    
};

