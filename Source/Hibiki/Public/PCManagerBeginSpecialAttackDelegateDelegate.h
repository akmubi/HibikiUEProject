#pragma once
#include "CoreMinimal.h"
#include "PCManagerBeginSpecialAttackDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPCManagerBeginSpecialAttackDelegate, bool, bIncludingCamera);

