#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoMenu_FilterPageType.generated.h"

UENUM(BlueprintType)
enum class EHbkPhotoMenu_FilterPageType : uint8 {
    BackGroundFilterPage,
    CharaFilterPage,
    OthersFilterPage,
    Max,
};

