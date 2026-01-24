#pragma once
#include "CoreMinimal.h"
#include "EHbkBattleResultType.h"
#include "HbkBattleResultParam.h"
#include "BattleResultConfirmedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBattleResultConfirmedDelegate, const FHbkBattleResultParam&, Result, EHbkBattleResultType, ResultType);

