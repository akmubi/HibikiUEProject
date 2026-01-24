#pragma once
#include "CoreMinimal.h"
#include "EHbkKorsicaGimmickProgress.h"
#include "KorsicaMiniGameResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKorsicaMiniGameResultDelegate, EHbkKorsicaGimmickProgress, GameResult);

