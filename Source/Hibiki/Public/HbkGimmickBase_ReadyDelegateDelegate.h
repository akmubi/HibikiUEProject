#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase_ReadyDelegateDelegate.generated.h"

class AHbkGimmickBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGimmickBase_ReadyDelegate, AHbkGimmickBase*, GimmickBase);

