#pragma once
#include "CoreMinimal.h"
#include "Em7500EnergySwordGazerAttackDelegateDelegate.generated.h"

class AHbkProjectile_Em7500EnergySwordGazerSingle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEm7500EnergySwordGazerAttackDelegate, AHbkProjectile_Em7500EnergySwordGazerSingle*, Single);

