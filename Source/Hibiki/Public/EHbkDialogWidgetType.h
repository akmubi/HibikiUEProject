#pragma once
#include "CoreMinimal.h"
#include "EHbkDialogWidgetType.generated.h"

UENUM(BlueprintType)
enum class EHbkDialogWidgetType : uint8 {
    Generic,
    AchievementsGetAllRewardsResult,
    StoreChipEquipmentDetails,
    BNetConnectionError,
    BNetError,
    SaveIconConfirm,
    StreamerModeConfirm,
    GenericWithTitle,
    StreamingInstall,
    GetArcadeReward,
    Max,
};

