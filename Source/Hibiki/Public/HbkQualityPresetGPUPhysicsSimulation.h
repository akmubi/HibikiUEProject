#pragma once
#include "CoreMinimal.h"
#include "HbkQualityPresetGPUPhysicsSimulation.generated.h"

USTRUCT(BlueprintType)
struct FHbkQualityPresetGPUPhysicsSimulation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuppressNiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CoinSimulationNumCoin;
    
    HIBIKI_API FHbkQualityPresetGPUPhysicsSimulation();
};

