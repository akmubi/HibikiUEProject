#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EHbkEm7500EnergyWallStartingPointProcess.h"
#include "HbkEm7500EnergyWallStartingPointLaneIndex.h"
#include "HbkEm7500EnergyWallStartingPointList.h"
#include "HbkEm7500EnergyWallStartingPointWorkParam.h"
#include "HbkProjectileWithoutMesh.h"
#include "HbkProjectile_Em7500EnergyWallSp.generated.h"

class UAkAudioEvent;
class UAkComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkProjectile_Em7500EnergyWallSp : public AHbkProjectileWithoutMesh {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm7500EnergyWallStartingPointProcess Process;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProcessNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> CheckTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckTraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500EnergyWallStartingPointLaneIndex> LaneIndexList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500EnergyWallStartingPointList> StartingPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500EnergyWallStartingPointWorkParam> StartingPointWorkParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkAudioEvent*> AudioEventList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugDraw;
    
public:
    AHbkProjectile_Em7500EnergyWallSp(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnAbortProjectileEvent();
    
};

