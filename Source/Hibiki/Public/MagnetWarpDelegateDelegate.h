#pragma once
#include "CoreMinimal.h"
#include "MagnetWarpDelegateDelegate.generated.h"

class UHbkMagneticPointComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMagnetWarpDelegate, UHbkMagneticPointComponent*, MagneticPointComp);

