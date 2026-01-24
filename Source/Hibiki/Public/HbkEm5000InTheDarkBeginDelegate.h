#pragma once
#include "CoreMinimal.h"
#include "HbkEm5000InTheDarkBeginDelegate.generated.h"

class AHbkEm5000_InTheDarkControl;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkEm5000InTheDarkBegin, AHbkEm5000_InTheDarkControl*, InTheDarkContrl);

