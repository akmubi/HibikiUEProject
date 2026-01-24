#pragma once
#include "CoreMinimal.h"
#include "ProcVolumeSpawnInfo.h"
#include "ProcPortalSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct TANGOSOUNDUTILITY_API FProcPortalSpawnInfo : public FProcVolumeSpawnInfo {
    GENERATED_BODY()
public:
    FProcPortalSpawnInfo();
};

