#pragma once
#include "CoreMinimal.h"
#include "HbkTalkSessionOnNewLineDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTalkSessionOnNewLine, const FName, NewLineName);

