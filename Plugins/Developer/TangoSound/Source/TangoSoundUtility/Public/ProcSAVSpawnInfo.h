#pragma once
#include "CoreMinimal.h"
#include "ProcVolumeSpawnInfo.h"
#include "ProcSAVSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct TANGOSOUNDUTILITY_API FProcSAVSpawnInfo : public FProcVolumeSpawnInfo {
    GENERATED_BODY()
public:
    FProcSAVSpawnInfo();
};

