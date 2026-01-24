#pragma once
#include "CoreMinimal.h"
#include "EHbkTitleWidgetSelectName.generated.h"

UENUM(BlueprintType)
enum class EHbkTitleWidgetSelectName : uint8 {
    Item_StartGame,
    Item_Continue,
    Item_StageSelect,
    Item_Controls,
    Item_Options,
    ItemNum,
};

