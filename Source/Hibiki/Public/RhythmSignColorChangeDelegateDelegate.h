#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RhythmSignColorChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRhythmSignColorChangeDelegate, FLinearColor, NewColor);

