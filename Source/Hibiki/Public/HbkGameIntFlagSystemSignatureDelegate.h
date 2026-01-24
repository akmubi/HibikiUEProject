#pragma once
#include "CoreMinimal.h"
#include "HbkGameIntFlagSystemSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FHbkGameIntFlagSystemSignature, FName, CategoryName, int32, ItemIndex, int32, NewFlag, int32, OldFlag);

