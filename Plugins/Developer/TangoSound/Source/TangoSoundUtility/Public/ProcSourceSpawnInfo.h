#pragma once
#include "CoreMinimal.h"
#include "ProcCommonSpawnInfo.h"
#include "ProcSourceSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct TANGOSOUNDUTILITY_API FProcSourceSpawnInfo : public FProcCommonSpawnInfo {
    GENERATED_BODY()
public:
    FProcSourceSpawnInfo();
};

