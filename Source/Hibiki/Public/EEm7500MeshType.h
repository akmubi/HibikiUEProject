#pragma once
#include "CoreMinimal.h"
#include "EEm7500MeshType.generated.h"

UENUM(BlueprintType)
enum class EEm7500MeshType : uint8 {
    Default,
    Phase2,
    Phase3,
};

