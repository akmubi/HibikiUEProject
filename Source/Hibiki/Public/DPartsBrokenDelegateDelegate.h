#pragma once
#include "CoreMinimal.h"
#include "DPartsBrokenDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDPartsBrokenDelegate, FName, PartName);

