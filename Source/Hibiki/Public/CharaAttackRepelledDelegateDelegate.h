#pragma once
#include "CoreMinimal.h"
#include "HbkBlockDamageParam.h"
#include "CharaAttackRepelledDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharaAttackRepelledDelegate, const AActor*, Blocker, const FHbkBlockDamageParam&, BlockParam);

