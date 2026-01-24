#pragma once
#include "CoreMinimal.h"
#include "ProcSourceSpawnInfo.h"
#include "ProcCSSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct TANGOSOUNDUTILITY_API FProcCSSpawnInfo : public FProcSourceSpawnInfo {
    GENERATED_BODY()
public:
    FProcCSSpawnInfo();
};

