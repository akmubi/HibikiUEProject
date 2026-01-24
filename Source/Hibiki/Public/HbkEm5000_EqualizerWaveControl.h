#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EHbkEqualizerWaveControlProcess.h"
#include "EHbkEqualizerWavePattern.h"
#include "EHbkEqualizerWaveShapePattern.h"
#include "EHbkNote.h"
#include "EHbkTakeDamagePresetCategory.h"
#include "EqualizerWaveControlEndDelegateDelegate.h"
#include "EqualizerWaveGeneratorEndDelegateDelegate.h"
#include "HbkAttackHitShapeInfo.h"
#include "HbkEqualizerWaveControlAttackPatternWave.h"
#include "HbkEqualizerWaveControlWave.h"
#include "HbkEqualizerWavePatternParam.h"
#include "Templates/SubclassOf.h"
#include "HbkEm5000_EqualizerWaveControl.generated.h"

class AHbkCameraRig_Rail;
class AHbkEm5000_EqualizerWaveGenerator;
class AHbkEm5000_EqualizerWaveGrid;
class AHbkEm5000_EqualizerWaveGround;
class AHbkEm5000_EqualizerWaveWall;
class AHbkEm5000_StageController;
class UAkAudioEvent;
class UAkComponent;
class UBoxComponent;
class UDamageType;
class UHbkRhythmSynchroComponent;

UCLASS(Blueprintable)
class AHbkEm5000_EqualizerWaveControl : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEqualizerWaveControlEndDelegate OnEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEqualizerWaveGeneratorEndDelegate OnGeneratorBreak;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEqualizerWaveControlProcess Process;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProcessNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRequestFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteToMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteCountToMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteToNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteCountToNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountToNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteToNoticeGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteCountToNoticeGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteToDelayEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteCountToDelayEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GridSizeCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridHeightCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridWidthCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridDepthCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> EqualizerWaveGeneratorPlacementLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkTakeDamagePresetCategory, TSubclassOf<AHbkEm5000_EqualizerWaveGenerator>> EqualizerWaveGeneratorClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AHbkEm5000_EqualizerWaveGenerator>> EqualizerWaveGenerators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> OwnerBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GeneratorNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GeneratorBreakCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnEqualizerWaveGroundCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> TraceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageTypeAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAttackHitShapeInfo HitShapeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEqualizerWaveControlWave> WaveParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoticeElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoticeElapsedTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GridDefaultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GridNoticeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm5000_EqualizerWaveGrid> EqualizerWaveGridClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm5000_EqualizerWaveGrid> EqualizerWaveGridActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm5000_EqualizerWaveWall> EqualizerWaveWallClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm5000_EqualizerWaveGround> EqualizerWaveGroundClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkEqualizerWavePattern, FHbkEqualizerWavePatternParam> PatternParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkEqualizerWaveShapePattern, FHbkEqualizerWaveControlAttackPatternWave> AttackPatternList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkEqualizerWaveShapePattern, FHbkEqualizerWaveControlAttackPatternWave> GroundAttackPatternList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkAudioEvent*> AudioEventList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkCameraRig_Rail> EqualizerWaveRailCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm5000_StageController> StageController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RhythmSynchro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBoxComponent*> BoxComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEqualizerWaveShapePattern TestShapePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestUpdateWaveAttackParamIndex;
    
public:
    AHbkEm5000_EqualizerWaveControl(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TestProcessPrepare();
    
    UFUNCTION(BlueprintCallable)
    void TestProcessLaunch();
    
    UFUNCTION(BlueprintCallable)
    void TestProcessGrid();
    
    UFUNCTION(BlueprintCallable)
    void TestProcessEnd();
    
    UFUNCTION(BlueprintCallable)
    void TestCreateWave();
    
public:
    UFUNCTION(BlueprintCallable)
    AHbkEm5000_EqualizerWaveGenerator* SpawnEqualizerWaveGenerator(const FVector& SpawnPos, const FRotator& SpawnRot);
    
    UFUNCTION(BlueprintCallable)
    void SetPattern(EHbkEqualizerWavePattern Pattern);
    
    UFUNCTION(BlueprintCallable)
    void RequestFinish();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGeneratorEnd(AHbkEm5000_EqualizerWaveGenerator* Generator);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBreakByPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkEqualizerWaveControlProcess GetProcess() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateWave(EHbkEqualizerWaveShapePattern ShapePattern, int32 Index);
    
};

