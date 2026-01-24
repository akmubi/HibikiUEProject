#pragma once
#include "CoreMinimal.h"
#include "EHbkAttackTraceType.generated.h"

UENUM(BlueprintType)
enum class EHbkAttackTraceType : uint8 {
    ATT_Sphere,
    ATT_Capsule,
    ATT_Box,
    ATT_Fan,
    ATT_Circle,
    ATT_Line,
    ATT_LineBox,
    ATT_LineSphere,
    ATT_LineCapsule,
    ATT_Sphere_SPAFlash,
};

