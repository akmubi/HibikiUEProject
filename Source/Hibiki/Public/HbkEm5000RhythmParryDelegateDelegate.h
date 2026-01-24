#pragma once
#include "CoreMinimal.h"
#include "HbkEm5000RhythmParryDelegateDelegate.generated.h"

class AHbkEm5000_RhythmParryControl;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkEm5000RhythmParryDelegate, AHbkEm5000_RhythmParryControl*, RhythmParryControl);

