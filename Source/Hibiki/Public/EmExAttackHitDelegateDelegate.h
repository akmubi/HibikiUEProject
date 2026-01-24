#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EmExAttackHitDelegateDelegate.generated.h"

class AHbkEnemyCharacter;
class UAnimSequenceBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FEmExAttackHitDelegate, AHbkEnemyCharacter*, Attacker, UAnimSequenceBase*, PlayerAnim, FVector, TargetLocation, bool, bIsKeepCurrentLocAndRot);

