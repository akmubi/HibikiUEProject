#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_CircuitBoardAudioAssetInfo_t.h"
#include "HbkGimmick_CircuitBoardSideLaserInfo_t.h"
#include "HbkGimmick_CircuitBoardSplineInfo_t.h"
#include "HbkGimmick_CircuitBoardVFXAssetInfo_t.h"
#include "HbkGimmick_CircuitBoardVerticalLaserInfo_t.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_CircuitBoard.generated.h"

class AActor;
class AHbkGimmick_ReverbLaser;
class UAkComponent;
class UHbkGameplayTask_GameEnvState;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_CircuitBoard : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGimmick_CircuitBoardOnEnd, bool, bDamage);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_CircuitBoardOnEnd OnCircuitLaserEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkGimmick_ReverbLaser> LaserClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> HatchActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_CircuitBoardAudioAssetInfo_t AudioAssetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_CircuitBoardVFXAssetInfo_t VFXAssetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_CircuitBoardSplineInfo_t> SplineInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_CircuitBoardVerticalLaserInfo_t> VerticalLaserInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_CircuitBoardSideLaserInfo_t RightLaserInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_CircuitBoardSideLaserInfo_t LeftLaserInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_GameEnvState* pGameEnvTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* pCircuitMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* pRightIronFrameMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* pRightIronFrameAk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* pLeftIronFrameMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* pLeftIronFrameAk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* pFenceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* pFenceAk;
    
public:
    AHbkGimmick_CircuitBoard(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StartMIDIEvent_CircuitBoard(int32 NoteNo, int32 Velocity);
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenFence();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWholeEvent_CircuitBoard(int32 Count, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncUserCue(const FString& UserCue);
    
    UFUNCTION(BlueprintCallable)
    void OnHalfBeatEvent_CircuitBoard(int32 Count, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnBeatEvent_CircuitBoard(int32 Count, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void On8thBeatEvent_CircuitBoard(int32 Count, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void On16thBeatEvent_CircuitBoard(int32 Count, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void LaserMIDINoteOnEvent_CircuitBoard(int32 NoteNo, int32 Velocity);
    
    UFUNCTION(BlueprintCallable)
    void LaserMIDINoteOffEvent_CircuitBoard(int32 NoteNo, int32 Velocity);
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseFence();
    
};

