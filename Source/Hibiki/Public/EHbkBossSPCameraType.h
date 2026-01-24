#pragma once
#include "CoreMinimal.h"
#include "EHbkBossSPCameraType.generated.h"

UENUM(BlueprintType)
enum class EHbkBossSPCameraType : uint8 {
    None,
    Exist,
    ExistAndInput,
};

