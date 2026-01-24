#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkBossStageControllerBase.h"
#include "HbkEm2000_StageController.generated.h"

class AActor;
class ACameraActor;
class AEmitter;
class AHbkCharacter;
class AHbkEm2000_BreakDownStandPoint;
class AHbkEm2000_ChargePoint;
class AHbkEm2000_PipeEquipPoint;
class AHbkGimmickBase;
class AHbkSoundActor;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm2000_StageController : public AHbkBossStageControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AHbkEm2000_PipeEquipPoint>> PipeEquipPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AHbkEm2000_ChargePoint>> ChargePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AHbkEm2000_BreakDownStandPoint>> BreakDownStandPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AHbkGimmickBase>> Magnets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkGimmickBase> Cable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkGimmickBase> ChargingArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AHbkGimmickBase>> Shutter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkGimmickBase> Door;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AEmitter> Discharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ACameraActor> BridgeBreakdownCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> DischargePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugDoNotPlayCS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> VFXDischarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> VFXCableRupture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> VFXBasicFireworkLoopList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> VFXBasicFireworkEndList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActivateBasicFirework;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBasicFireworkWithTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasicFireworkTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AHbkSoundActor>> FireworkSoundActorList;
    
public:
    AHbkEm2000_StageController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBridgeBreakdownModeForPlayer(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveVFX_Discarge(bool Activate);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveVFX_CableRupture(bool Activate);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveVFX_BasicFireworkWithTimer(EHbkNote NoteType, float NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveVFX_BasicFirework(bool Activate);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveStageMagnet(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveEmitterDischarge(bool Active);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerAttackImpact(const AHbkCharacter* Attacker);
    
    UFUNCTION(BlueprintCallable)
    void OnDynamicSpawnedBoss();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidPipeEquipPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidChargePointPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEm2000_PipeEquipPoint* GetPipeEquipPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEm2000_ChargePoint* GetChargePoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBreakDownStandPointIndexCloseToPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEm2000_BreakDownStandPoint* GetBreakdownStandPoint(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_StartCable();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_DebugChangeMusicState(int32 InPhase);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_AbortCable();
    
};

