#pragma once
#include "CoreMinimal.h"
#include "HbkGameMapFlagSystemSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FHbkGameMapFlagSystemSignature, FName, CategoryName, FName, ItemName, int32, NewFlag, int32, OldFlag);

