#pragma once
#include "CoreMinimal.h"
#include "HbkResultDetail.h"
#include "BattleEndRecordDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FBattleEndRecordDelegate, int32, BattleId, int32, TotalScore, int32, BattleRank, const FHbkResultDetail&, ScoreDetail, const FHbkResultDetail&, JustTimingDetail, const FHbkResultDetail&, TimeDetail);

