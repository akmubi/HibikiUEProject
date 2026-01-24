#pragma once
#include "CoreMinimal.h"
#include "CharaAttackImpactDelegateDelegate.generated.h"

class AHbkCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharaAttackImpactDelegate, const AHbkCharacter*, Attacker);

