#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EHbkEm7500CheckDistanceType.h"
#include "EHbkEm7500HUDPreset.h"
#include "EHbkEm7500RhythmParryType.h"
#include "EKaleMoveDirection.h"
#include "HbkBossStageControllerBase.h"
#include "HbkEm7500CircleFireGroupParam.h"
#include "HbkEm7500EnergySwordGazerParam.h"
#include "HbkEm7500EnergyWallStartingPointList.h"
#include "HbkEm7500RhythmParryInitParam.h"
#include "HbkEm7500ThunderOriginParam.h"
#include "Templates/SubclassOf.h"
#include "HbkEm7500_StageController.generated.h"

class AActor;
class AController;
class AHbkEm7500_CommandBattleControl;
class AHbkEm7500_RhythmParryControl;
class UAnimSequenceBase;
class UBehaviorTree;
class UDamageType;
class UHbkPlayerHUDDataObject;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm7500_StageController : public AHbkBossStageControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> GroundActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypeQuerys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypeQuerysForWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm7500_CommandBattleControl> CommandBattleControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm7500_RhythmParryControl> RhythmParryControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> ThunderDragonLocationActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ThunderDragonLocationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> OverdriveLaserLocationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> RotateEnergyAttack808FirstLocationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> RotateEnergyAttack808SecondLocationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkEm7500CheckDistanceType, float> CheckDistanceValueMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500CircleFireGroupParam> HelmDivideSlashAlphaFireGroupParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500EnergySwordGazerParam> EnergySwordGazerParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500CircleFireGroupParam> EnergySwordGazerFireGroupParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkEm7500ThunderOriginParam> ThunderOriginParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500EnergyWallStartingPointList> StartingPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkEm7500RhythmParryType, FHbkEm7500RhythmParryInitParam> RhythmParryInitParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm7500HUDPreset HUDPresetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkPlayerHUDDataObject> HUDPreset_RhythmParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFirst808QTE;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* DebugBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MultiSlashExecBeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* ArmWhipAnim;
    
    AHbkEm7500_StageController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHUDPreset(EHbkEm7500HUDPreset Type);
    
    UFUNCTION(BlueprintCallable)
    void SetEndFinishCamera(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetBossIdleState();
    
    UFUNCTION(BlueprintCallable)
    void SetBossArmTickAndVisible(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDamage(float Value, float PrevValue, float ValueRate);
    
    UFUNCTION(BlueprintCallable)
    void OnKaleDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnInteract808QTE(AActor* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void OnEnd808QTE();
    
    UFUNCTION(BlueprintCallable)
    void OnDynamicSpawnedBoss();
    
protected:
    UFUNCTION(BlueprintCallable)
    void IncrementClearAllStage();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void HitCheckEscapeDirection(float CheckLength, EKaleMoveDirection& OutCheckDirection, bool bIsDebugDraw) const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetThunderDragonLocationActor();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetRotateEnergyAttack808LocationActor();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetOverdriveLaserLocationActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TEnumAsByte<EObjectTypeQuery>> GetObjectTypeQuerysForWall() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TEnumAsByte<EObjectTypeQuery>> GetObjectTypeQuerys() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetLastRemainArmNum();
    
    UFUNCTION(BlueprintCallable)
    float GetCheckDistanceValue(EHbkEm7500CheckDistanceType Type);
    
    UFUNCTION(BlueprintCallable)
    AActor* FindThunderDragonLocationActor();
    
    UFUNCTION(BlueprintCallable)
    void CallForceEndSPAndJam();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_RequestSoundStateByEvent(EHbkEm7500RhythmParryType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnStartRhythmParryPhase3();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnStartRhythmParryPhase1();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnInteract808QTE(AActor* Interactor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEndRTKaleBattle();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEnd808QTE();
    
public:
    UFUNCTION(BlueprintCallable)
    void AdjustLocationForRhythmParry(EHbkEm7500RhythmParryType Type);
    
};

