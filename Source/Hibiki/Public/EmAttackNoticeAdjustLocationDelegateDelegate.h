#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EmAttackNoticeAdjustLocationDelegateDelegate.generated.h"

class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEmAttackNoticeAdjustLocationDelegate, AHbkEnemyCharacter*, Attacker, FVector, TargetLocation, bool, bIsKeepCurrentLocAndRot);

