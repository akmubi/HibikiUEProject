#pragma once
#include "CoreMinimal.h"
#include "HbkGameBitFlagSystemSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FHbkGameBitFlagSystemSignature, FName, CategoryName, int32, ItemIndex, bool, NewFlag, bool, OldFlag);

