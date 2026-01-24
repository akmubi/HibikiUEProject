#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EHbkEm5000GameEnvPhase.h"
#include "EHbkEm5000HUDPreset.h"
#include "EHbkEm5000PlayerCameraMode.h"
#include "EHbkEqualizerWavePattern.h"
#include "EHbkSolidVocalAssaultType.h"
#include "HbkBossStageControllerBase.h"
#include "HbkEm5000IntRange.h"
#include "Templates/SubclassOf.h"
#include "HbkEm5000_StageController.generated.h"

class AActor;
class AHbkCameraRig_Rail;
class AHbkCharacter;
class AHbkEm5000_BridgeBreakdownControl;
class AHbkEm5000_EqualizerWaveControl;
class AHbkEm5000_EqualizerWaveGenerator;
class AHbkEm5000_EqualizerWaveShield;
class AHbkEm5000_InTheDarkControl;
class AHbkEm5000_PositioningInTheDark;
class AHbkEm5000_RhythmParryControl;
class AHbkEm5000_SBFMirrorBall;
class AHbkEm5000_SideStoryControl;
class AHbkEm5000_SolidVocalControl;
class AHbkEnemySpawner;
class AHbkProjectile_Em5000SoundBlaster;
class AHbkProjectile_SolidVocal;
class UHbkHbkDecalPastingAsset;
class UHbkPlayerHUDDataObject;
class UHbkSimpleDisplayWidget;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm5000_StageController : public AHbkBossStageControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm5000GameEnvPhase ActiveGameEnvPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEqualizerWavePattern EqualizerWavePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultChangeCameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm5000_SolidVocalControl> ControlClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm5000_SolidVocalControl> SolidVocalControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AHbkEm5000_SolidVocalControl>> SolidVocalControlList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SolidVocalAssaultTypeKinds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRandomSolidVocalAssault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SolidVocalAssaultIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkSolidVocalAssaultType, float> SolidVocalSurroundDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SolidVocalHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSolidVocalExplode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AHbkProjectile_SolidVocal>> SolidVocalList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm5000HUDPreset HUDPresetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkPlayerHUDDataObject> HUDPreset_BridgeBreakdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkPlayerHUDDataObject> HUDPreset_RhythmParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm5000_SBFMirrorBall> MirrorBallClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm5000_SBFMirrorBall> MirrorBallActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> MirrorBallLocationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundBlasterFestivalLaserBehaviorKinds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundBlasterFestivalLaserSafeAngleY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossAdjustLocationRowForEqualizerWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerAdjustLocationRowForEqualizerWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EqualizerWaveShapePatternKinds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EqualizerWaveAdditionRecoveryBeginBeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm5000_EqualizerWaveShield> EqualizerWaveShieldClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm5000_EqualizerWaveShield> EqualizerWaveShieldActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EqualizerWaveShieldAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundBlasterExecuteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundBlasterReflectCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundBlasterReflectCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAllowToDisplaySoundBlasterParryButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAlreadyLearnedSoundBlasterParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossAdjustLocationRowForBridgeBreakdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerAdjustLocationRowForBridgeBreakdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSoloLightingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnvNameForInTheDark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnvNameForInTheDarkOfCutSceneEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChangeCameraForInTheDark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChangeCameraForSideStory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossAdjustLocationRowForSideStory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossAdjustLocationRowForRhythmParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerAdjustLocationRowForRhythmParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkSimpleDisplayWidget> CutInWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHbkSimpleDisplayWidget> CutInWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCallHealthLessThanHalf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExecuteRhythmParry;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AHbkProjectile_Em5000SoundBlaster>> SoundBlasterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkHbkDecalPastingAsset* DecalPastingAssetForPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> DecalPastingConvertKeyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm5000_EqualizerWaveControl> EqualizerWaveControlClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm5000_EqualizerWaveControl> EqualizerWaveControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm5000_BridgeBreakdownControl> BridgeBreakdownControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm5000_PositioningInTheDark> PositioningInTheDarkActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm5000_InTheDarkControl> InTheDarkControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm5000_SideStoryControl> SideStoryControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> SideStoryLocationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm5000_RhythmParryControl> RhythmParryControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEnemySpawner> EnemySpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkCameraRig_Rail> EqualizerWaveRailCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000IntRange ShiftGridIndexOfEqualizerWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000IntRange SecondGridIntervalOfEqualizerWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000IntRange SecondGridCountOfEqualizerWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000IntRange ThirdGridCountOfEqualizerWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> VFXFlareList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestNowSelectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TestSpawnPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TestSpawnRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkSolidVocalAssaultType TestSolidVocalAssaultType;
    
public:
    AHbkEm5000_StageController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregistSolidVocal(AHbkProjectile_SolidVocal* SolidVocal);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TestSpawnSBFShiled();
    
    UFUNCTION(BlueprintCallable)
    void TestSpawnSBFMirrorBall();
    
    UFUNCTION(BlueprintCallable)
    void TestSpawnEqualizerWaveGenerator();
    
    UFUNCTION(BlueprintCallable)
    void TestSpawnEqualizerWaveControl();
    
    UFUNCTION(BlueprintCallable)
    void TestRequestFinishSBFMirrorBall();
    
    UFUNCTION(BlueprintCallable)
    void TestRequestFinishEqualizerWaveShield();
    
    UFUNCTION(BlueprintCallable)
    void TestLaunchSBFMirrorBall();
    
    UFUNCTION(BlueprintCallable)
    void TestDuringInstallationSBFMirrorBall();
    
    UFUNCTION(BlueprintCallable)
    void TestDeactiveEqualizerWaveRailCamera();
    
    UFUNCTION(BlueprintCallable)
    void TestActiveEqualizerWaveRailCamera();
    
public:
    UFUNCTION(BlueprintCallable)
    void SwitchPhase(EHbkEm5000GameEnvPhase NewGameEnvPhase);
    
    UFUNCTION(BlueprintCallable)
    AHbkEm5000_SBFMirrorBall* SpawnSBFMirrorBall(const FVector& SpawnPos, const FRotator& SpawnRot);
    
    UFUNCTION(BlueprintCallable)
    void SpawnSaberForCS0825();
    
    UFUNCTION(BlueprintCallable)
    AHbkEm5000_EqualizerWaveShield* SpawnEqualizerWaveShield();
    
    UFUNCTION(BlueprintCallable)
    AHbkEm5000_EqualizerWaveGenerator* SpawnEqualizerWaveGenerator(const FVector& SpawnPos, const FRotator& SpawnRot);
    
    UFUNCTION(BlueprintCallable)
    AHbkEm5000_EqualizerWaveControl* SpawnEqualizerWaveControl(const FVector& SpawnPos, const FRotator& SpawnRot);
    
    UFUNCTION(BlueprintCallable)
    void SpawnEnemiesBridgeBreakdown();
    
    UFUNCTION(BlueprintCallable)
    void ShowCutInWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetSoloLightingMode(bool Enable, bool bIsCutSceneEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerCameraMode(EHbkEm5000PlayerCameraMode Mode, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void SetParamSolidVocalSurroundDistance(const TMap<EHbkSolidVocalAssaultType, float>& SurroundDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetParamSolidVocalHealth(float Health);
    
    UFUNCTION(BlueprintCallable)
    void SetParamSolidVocalExplode(bool IsExplode);
    
    UFUNCTION(BlueprintCallable)
    void SetParamSolidVocalAssaultTypeKinds(int32 Kinds);
    
    UFUNCTION(BlueprintCallable)
    void SetParamLaserSafeAngleY(float SafeAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetParamLaserBehaviorKinds(int32 Kinds);
    
    UFUNCTION(BlueprintCallable)
    void SetParamEqualizerWaveShapePatternKinds(int32 Kinds);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDPreset(EHbkEm5000HUDPreset Type);
    
    UFUNCTION(BlueprintCallable)
    void SetEqualizerWavePattern(EHbkEqualizerWavePattern Pattern);
    
    UFUNCTION(BlueprintCallable)
    void SetEndFinishCamera(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetBossIdleState(bool IsStand);
    
    UFUNCTION(BlueprintCallable)
    void SetActivateVFX_Flare(bool Activate);
    
    UFUNCTION(BlueprintCallable)
    void ResetSoundBlasterReflectCount(int32 Max);
    
    UFUNCTION(BlueprintCallable)
    void ResetPhase(int32 StateIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetNowSelectIndex();
    
    UFUNCTION(BlueprintCallable)
    void ResetActiveGameEnvPhase();
    
    UFUNCTION(BlueprintCallable)
    bool RequestFinishSBFMirrorBall();
    
    UFUNCTION(BlueprintCallable)
    void RequestFinishEqualizerWaveShield();
    
    UFUNCTION(BlueprintCallable)
    void RequestFinishEqualizerWave();
    
    UFUNCTION(BlueprintCallable)
    void RegistSolidVocal(AHbkProjectile_SolidVocal* SolidVocal);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSoundBlaster(AHbkProjectile_Em5000SoundBlaster* SoundBlaster);
    
    UFUNCTION(BlueprintCallable)
    void PrepareInTheDark();
    
    UFUNCTION(BlueprintCallable)
    void PlayNotifyVFX();
    
    UFUNCTION(BlueprintCallable)
    void PauseRhythmParry();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSolidVocalControlTaskEnd(AHbkEm5000_SolidVocalControl* InSolidVocalControl);
    
    UFUNCTION(BlueprintCallable)
    void OnSBFMirrorBallEnd(AHbkEm5000_SBFMirrorBall* InSBFMirrorBall);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerAttackImpact(const AHbkCharacter* Attacker);
    
    UFUNCTION(BlueprintCallable)
    void OnEqualizerWaveGeneratorEnd(AHbkEm5000_EqualizerWaveGenerator* InEqualizerWaveGenerator);
    
    UFUNCTION(BlueprintCallable)
    void OnEqualizerWaveControlEnd(AHbkEm5000_EqualizerWaveControl* InEqualizerWaveControl);
    
    UFUNCTION(BlueprintCallable)
    void OnDynamicSpawnedBoss();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeHealth(float Value, float PrevValue, float ValueRate);
    
public:
    UFUNCTION(BlueprintCallable)
    AHbkEm5000_SolidVocalControl* LaunchSolidVocalControl(const FVector& SpawnPos, const FRotator& SpawnRot);
    
    UFUNCTION(BlueprintCallable)
    bool LaunchSBFMirrorBall();
    
protected:
    UFUNCTION(BlueprintCallable)
    void K2_OnEndBridgeBreakdown();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSoloLightingMode() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAllowToDisplaySoundBlasterParryButton();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllFinishedSoundBlaster() const;
    
    UFUNCTION(BlueprintCallable)
    void HideCutInWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSoundBlasterReflectCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEm5000_SideStoryControl* GetSideStoryControl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEm5000_SolidVocalControl* GetLastSolidVocalControl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEm5000_InTheDarkControl* GetInTheDarkControl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkEqualizerWavePattern GetEqualizerWavePattern() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEm5000_EqualizerWaveControl* GetEqualizerWaveControl() const;
    
    UFUNCTION(BlueprintCallable)
    AHbkEm5000_BridgeBreakdownControl* GetBridgeBreakdownControl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkEm5000GameEnvPhase GetActiveGameEnvPhase() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishSoundBlaster();
    
    UFUNCTION(BlueprintCallable)
    void EndBridgeBreakdown();
    
    UFUNCTION(BlueprintCallable)
    bool DuringInstallationSBFMirrorBall();
    
    UFUNCTION(BlueprintCallable)
    void DeleteCutInWidget();
    
    UFUNCTION(BlueprintCallable)
    void CreateEqualizerWave(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CreateCutInWidget();
    
    UFUNCTION(BlueprintCallable)
    void ClearSoundBlasterList();
    
    UFUNCTION(BlueprintCallable)
    void ChangePlayerModeBridgeBreakdown(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleState(int32 InPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_StartCameraForBridgeBreakdown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_RequestSoundStateForRhythmParry(int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSt08_CP130();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSt08_CP120();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSt08_CP110();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSt08_CP100();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnRhythmTowerBattleEnd();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnHealthLessThanHalf();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEndBridgeBreakdown();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_EndCameraForBridgeBreakdown();
    
    UFUNCTION(BlueprintCallable)
    void BeginBridgeBreakdown();
    
    UFUNCTION(BlueprintCallable)
    bool AttachSBFMirrorBall(AActor* TargetActor, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    void AllAbortSolidVocalControl();
    
    UFUNCTION(BlueprintCallable)
    void AllAbortSolidVocal();
    
    UFUNCTION(BlueprintCallable)
    void AdjustLocationForSideStory();
    
    UFUNCTION(BlueprintCallable)
    void AdjustLocationForRhythmParry();
    
    UFUNCTION(BlueprintCallable)
    void AdjustLocationForEqualizerWave();
    
    UFUNCTION(BlueprintCallable)
    void AdjustLocationForBridgeBreakdown();
    
    UFUNCTION(BlueprintCallable)
    bool AddSoundBlasterReflectCount();
    
    UFUNCTION(BlueprintCallable)
    void AbortSoundBlaster();
    
    UFUNCTION(BlueprintCallable)
    void AbortRhythmParry();
    
};

