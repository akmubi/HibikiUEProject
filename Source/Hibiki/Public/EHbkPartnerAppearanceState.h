#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerAppearanceState.generated.h"

UENUM(BlueprintType)
enum class EHbkPartnerAppearanceState : uint8 {
    None,
    Appear,
    Appeared,
    Disappear,
    Disappeared,
};

