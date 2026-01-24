#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RD_bg0730DelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHbkGimmick_RD_bg0730Delegate, const int32, Index, const AActor*, Causer, AActor*, Victim);

