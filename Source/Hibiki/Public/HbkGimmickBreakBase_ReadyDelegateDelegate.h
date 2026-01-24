#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBreakBase_ReadyDelegateDelegate.generated.h"

class AHbkGimmick_BreakBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGimmickBreakBase_ReadyDelegate, AHbkGimmick_BreakBase*, GimmickBreakBase);

