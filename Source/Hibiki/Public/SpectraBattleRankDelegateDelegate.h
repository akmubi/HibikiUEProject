#pragma once
#include "CoreMinimal.h"
#include "SpectraBattleRankDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpectraBattleRankDelegate, int32, Rank);

