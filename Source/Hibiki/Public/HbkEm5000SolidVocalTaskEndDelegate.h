#pragma once
#include "CoreMinimal.h"
#include "HbkEm5000SolidVocalTaskEndDelegate.generated.h"

class AHbkEm5000_SolidVocalControl;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkEm5000SolidVocalTaskEnd, AHbkEm5000_SolidVocalControl*, SolidVocalControl);

