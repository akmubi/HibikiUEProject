#pragma once
#include "CoreMinimal.h"
#include "HbkEm5000InTheDarkEndDelegate.generated.h"

class AHbkEm5000_InTheDarkControl;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkEm5000InTheDarkEnd, AHbkEm5000_InTheDarkControl*, InTheDarkContrl);

