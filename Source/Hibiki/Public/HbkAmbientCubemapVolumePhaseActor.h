#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "HbkAmbientCubemapVolumePhase.h"
#include "HbkAmbientCubemapVolumePhaseActor.generated.h"

UCLASS(Blueprintable)
class AHbkAmbientCubemapVolumePhaseActor : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAmbientCubemapVolumePhase GameEnvPhaseStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAmbientCubemapVolumePhase GameEnvPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAmbientCubemapVolumePhase GameEnvPhaseC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAmbientCubemapVolumePhase GameEnvPhaseD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAmbientCubemapVolumePhase GameEnvPhaseE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAmbientCubemapVolumePhase GameEnvPhaseF;
    
public:
    AHbkAmbientCubemapVolumePhaseActor(const FObjectInitializer& ObjectInitializer);

};

