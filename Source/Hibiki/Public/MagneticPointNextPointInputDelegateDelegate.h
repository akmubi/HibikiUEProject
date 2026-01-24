#pragma once
#include "CoreMinimal.h"
#include "MagneticPointNextPointInputDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMagneticPointNextPointInputDelegate, bool, bJustTiming);

