#pragma once
#include "CoreMinimal.h"
#include "HbkTalkSesNewLineDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTalkSesNewLineDelegate, FName, NewLineName);

