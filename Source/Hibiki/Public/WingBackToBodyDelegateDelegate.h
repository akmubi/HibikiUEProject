#pragma once
#include "CoreMinimal.h"
#include "WingBackToBodyDelegateDelegate.generated.h"

class AHbkProjectile;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWingBackToBodyDelegate, AHbkProjectile*, Projectile);

