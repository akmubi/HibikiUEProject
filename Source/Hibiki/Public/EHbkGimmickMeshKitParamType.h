#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickMeshKitParamType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmickMeshKitParamType : uint8 {
    None,
    Default,
    Activate,
    Deactivate,
    ActivateExtInt,
    DeactivateExtInt,
};

