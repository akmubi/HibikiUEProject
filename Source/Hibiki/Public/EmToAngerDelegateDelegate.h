#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EmToAngerDelegateDelegate.generated.h"

class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEmToAngerDelegate, AHbkEnemyCharacter*, Attacker, FVector, TargetLocation, bool, bIsKeepCurrentLocAndRot);

