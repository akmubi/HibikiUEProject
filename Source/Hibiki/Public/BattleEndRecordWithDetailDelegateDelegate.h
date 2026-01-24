#pragma once
#include "CoreMinimal.h"
#include "HbkBattleResultDetail.h"
#include "HbkBattleResultScoreDetail.h"
#include "BattleEndRecordWithDetailDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FBattleEndRecordWithDetailDelegate, const FHbkBattleResultDetail&, ResultDetail, const FHbkBattleResultScoreDetail&, ScoreDetail, const FHbkBattleResultScoreDetail&, JustTimingDetail, const FHbkBattleResultScoreDetail&, TimeDetail);

