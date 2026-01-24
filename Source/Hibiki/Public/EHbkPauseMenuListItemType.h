#pragma once
#include "CoreMinimal.h"
#include "EHbkPauseMenuListItemType.generated.h"

UENUM(BlueprintType)
enum class EHbkPauseMenuListItemType : uint8 {
    None,
    ReturnToGame,
    ReturnToTitle,
    ReturnToHideout,
    ReturnToRTMenu,
    ShowHowToPlay,
    ShowComboList,
    ShowOption,
    ShowPhotoMode,
    DisabledPhotoMode,
    ReturnToBPMRushMenu,
    ReturnToRDMenu,
};

