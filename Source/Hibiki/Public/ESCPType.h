#pragma once
#include "CoreMinimal.h"
#include "ESCPType.generated.h"

UENUM(BlueprintType)
enum class ESCPType : uint8 {
    DataTable,
    CheckPoint,
};

