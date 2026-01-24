#pragma once
#include "CoreMinimal.h"
#include "EHbkShopMenuCategoryState.generated.h"

UENUM(BlueprintType)
enum class EHbkShopMenuCategoryState : uint8 {
    None,
    Lock,
    New,
    Available,
};

