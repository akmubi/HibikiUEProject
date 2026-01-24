#pragma once
#include "CoreMinimal.h"
#include "ProcSourceSpawnInfo.h"
#include "ProcMPSSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct TANGOSOUNDUTILITY_API FProcMPSSpawnInfo : public FProcSourceSpawnInfo {
    GENERATED_BODY()
public:
    FProcMPSSpawnInfo();
};

