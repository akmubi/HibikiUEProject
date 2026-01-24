#pragma once
#include "CoreMinimal.h"
#include "ProcSourceSpawnInfo.h"
#include "ProcCPSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct TANGOSOUNDUTILITY_API FProcCPSpawnInfo : public FProcSourceSpawnInfo {
    GENERATED_BODY()
public:
    FProcCPSpawnInfo();
};

