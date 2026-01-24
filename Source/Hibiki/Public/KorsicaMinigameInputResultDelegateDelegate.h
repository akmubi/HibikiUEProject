#pragma once
#include "CoreMinimal.h"
#include "EHbkKorsicaGimmickInputType.h"
#include "KorsicaMinigameInputResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKorsicaMinigameInputResultDelegate, EHbkKorsicaGimmickInputType, InputResult);

