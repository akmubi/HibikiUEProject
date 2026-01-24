#pragma once
#include "CoreMinimal.h"
#include "EHbkDifficultyType.h"
#include "HbkStageSelectMenuWidgetOnDecidedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHbkStageSelectMenuWidgetOnDecided, int32, StageNo, EHbkDifficultyType, DifficultyType);

