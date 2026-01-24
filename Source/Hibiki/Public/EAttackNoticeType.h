#pragma once
#include "CoreMinimal.h"
#include "EAttackNoticeType.generated.h"

UENUM(BlueprintType)
enum class EAttackNoticeType : uint8 {
    None,
    Parry,
    Dodge,
};

