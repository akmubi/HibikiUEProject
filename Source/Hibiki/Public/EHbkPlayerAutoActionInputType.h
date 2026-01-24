#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerAutoActionInputType.generated.h"

UENUM(BlueprintType)
enum class EHbkPlayerAutoActionInputType : uint8 {
    None,
    Attack1,
    Attack2,
    Jump,
    Dodge,
    Parry,
    Magnet,
    PartnerRequest,
    SpAttack,
};

