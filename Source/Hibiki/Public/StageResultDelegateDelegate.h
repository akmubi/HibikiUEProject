#pragma once
#include "CoreMinimal.h"
#include "HbkStageResultDetail.h"
#include "HbkStageResultStats.h"
#include "StageResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FStageResultDelegate, int32, TotalScore, int32, StageRank, const TArray<FHbkStageResultDetail>&, BattleDetails, const FHbkStageResultStats&, StageStats);

