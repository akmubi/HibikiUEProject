#pragma once
#include "CoreMinimal.h"
#include "HbkNpcCharacter_SignificanceStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkNpcCharacter_SignificanceStateChanged, bool, IsActive);

