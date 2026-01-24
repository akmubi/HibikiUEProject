#pragma once
#include "CoreMinimal.h"
#include "RhythmParrySuccessfulDelegateDelegate.generated.h"

class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRhythmParrySuccessfulDelegate, AHbkEnemyCharacter*, Enemy, bool, bIsParryAllPerfect);

