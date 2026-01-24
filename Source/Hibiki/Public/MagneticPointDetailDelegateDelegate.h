#pragma once
#include "CoreMinimal.h"
#include "MagneticPointDetailDelegateDelegate.generated.h"

class AHbkPlayerCharacterBase;
class UHbkMagneticPointComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMagneticPointDetailDelegate, AHbkPlayerCharacterBase*, Player, UHbkMagneticPointComponent*, MagneticPoint);

