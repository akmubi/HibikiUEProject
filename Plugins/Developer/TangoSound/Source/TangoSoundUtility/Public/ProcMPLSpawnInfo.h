#pragma once
#include "CoreMinimal.h"
#include "ProcSourceSpawnInfo.h"
#include "ProcMPLSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct TANGOSOUNDUTILITY_API FProcMPLSpawnInfo : public FProcSourceSpawnInfo {
    GENERATED_BODY()
public:
    FProcMPLSpawnInfo();
};

