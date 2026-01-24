#pragma once
#include "CoreMinimal.h"
#include "KorsicaParrySuccessfullDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKorsicaParrySuccessfullDelegate, bool, bIsIncrementPhase);

