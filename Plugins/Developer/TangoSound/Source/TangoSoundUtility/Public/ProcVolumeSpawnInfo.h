#pragma once
#include "CoreMinimal.h"
#include "ProcCommonSpawnInfo.h"
#include "ProcVolumeSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct TANGOSOUNDUTILITY_API FProcVolumeSpawnInfo : public FProcCommonSpawnInfo {
    GENERATED_BODY()
public:
    FProcVolumeSpawnInfo();
};

