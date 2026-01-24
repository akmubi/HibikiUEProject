#pragma once
#include "CoreMinimal.h"
#include "RhythmSignEmissiveDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRhythmSignEmissiveDelegate, float, Emissive);

