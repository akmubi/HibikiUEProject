#pragma once
#include "CoreMinimal.h"
#include "HbkComplexLaunchParam.h"
#include "ComplexLaunchDelegateDelegate.generated.h"

class AHbkProjectile;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FComplexLaunchDelegate, FName, SlotName, AHbkProjectile*, Projectile, const FHbkComplexLaunchParam&, LaunchParam);

