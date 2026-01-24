#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase_SignificanceStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGimmickBase_SignificanceStateChanged, bool, IsActive);

