#pragma once
#include "CoreMinimal.h"
#include "EnemyRhythmDodgePlayerActionInfo.h"
#include "RhythmDodgeStartPlayerActionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRhythmDodgeStartPlayerActionDelegate, const FEnemyRhythmDodgePlayerActionInfo&, PlayerDodgeActionInfo);

