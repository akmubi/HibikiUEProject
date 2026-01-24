#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "BossChangePhaseDelegateDelegate.h"
#include "EHbkEm6000CommandBattleMode.h"
#include "HbkBossStageControllerBase.h"
#include "HbkEm6000_StagePlaceInfo.h"
#include "Templates/SubclassOf.h"
#include "HbkEm6000_StageController.generated.h"

class AActor;
class ADiskSimulatorGPU;
class AHbkCameraActor;
class AHbkEm6000_CoinDiveController;
class AHbkEm6000_CoinSplash;
class AHbkEm6000_CommandBattleControl;
class AHbkEm6000_CommandBattleTornado;
class AHbkEm6000_IntermissionController;
class AHbkEm6000_SafeRoomLaserControl;
class UAkAudioEvent;
class UAnimMontage;
class UDataTable;
class UHbkEm6000_StageAreaComponent;
class UHbkEm6000_StageHatchComponent;

UCLASS(Blueprintable)
class AHbkEm6000_StageController : public AHbkBossStageControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossChangePhaseDelegate OnChangePhase;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEm6000_StageAreaComponent* StageAreaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEm6000_StageHatchComponent* StageHatchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm6000_SafeRoomLaserControl> SafeRoomLaserControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm6000_CommandBattleControl> CommandBattleControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm6000_CommandBattleTornado> CommandBattleTornadoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_CommandBattleTornado> CommandBattleTornado;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm6000_CoinDiveController> CoinDiveController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm6000_IntermissionController> IntermissionController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm6000_StagePlaceInfo> StagePlaceInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentCameraParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableFinishCameraForRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkCameraActor> FinishCameraActorForRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FinishCameraAudioEventForRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeCameraBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypeQuerysForCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypeQuerysForWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CollisionChannelForFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> CoinSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADiskSimulatorGPU> CoinSimulationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CoinSimulationLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CoinSimulationRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<AActor>> MarkingActorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<AActor>> SteppingStoneActorActorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> ToonMaskingHideActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> GameOverTalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> GameOverTalkIdsForWolf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> GameOverTalkIdsForHuman;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugCollisionDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugActionTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TransformHumanAnimEm6500;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm6000_CoinSplash> CoinSplashClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Music3AStateEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Music3BStateEvent;
    
public:
    AHbkEm6000_StageController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartUpFloatingLaser();
    
    UFUNCTION(BlueprintCallable)
    AHbkEm6000_CommandBattleTornado* SpawnCommandBattleTornado(EHbkEm6000CommandBattleMode InCommandBattleMode);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleToonMaskingHideActors(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableFloatingLaser(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ResetBossGaugeHealth(int32 StateIndex);
    
    UFUNCTION(BlueprintCallable)
    void RecoverBossGaugeHealth(float RecoverTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPhaseDefaultCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugSelectedTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetSteppingStoneActor(FName Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEm6000_SafeRoomLaserControl* GetSafeRoomLaserControl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TEnumAsByte<EObjectTypeQuery>> GetObjectTypeQuerysForWall() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TEnumAsByte<EObjectTypeQuery>> GetObjectTypeQuerysForCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetMarkingActorRotation(FName Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMarkingActorLocation(FName Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetMarkingActor(FName Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEm6000_IntermissionController* GetIntermissionController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDebugCollisionDraw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentCameraParamName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEm6000_CommandBattleTornado* GetCommandBattleTornado() const;
    
    UFUNCTION(BlueprintCallable)
    AHbkEm6000_CommandBattleControl* GetCommandBattleControl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ECollisionChannel> GetCollisionChannelForFloor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEm6000_CoinDiveController* GetCoinDiveController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleState() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableSteppingStoneActorCollisionAll(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void DestroyCommandBattleTornado();
    
    UFUNCTION(BlueprintCallable)
    void ChangePhase(int32 StateIndex, bool bIsChangeFreeControlObjects, bool bIsChangeCamera);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMusicState(UAkAudioEvent* StateEvent);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFreeControlObjectsForStateIndex(int32 StateIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFreeControlObjectsForMarkName(FName MarkName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFinishCameraForRT(bool bIsEnable, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCameraForStateIndex(int32 StateIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCameraForPhaseDefault();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCameraForCameraParamName(FName CameraParamName, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleState(int32 StateIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSt10_CP0230();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSt10_CP0220();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSt10_CP0210();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSt10_CP0200();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnCommandBattleStartForRT();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnCommandBattleEndForRT(bool bIsSuccess, bool bIsLastBattle);
    
};

