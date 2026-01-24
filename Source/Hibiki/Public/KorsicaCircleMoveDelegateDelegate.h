#pragma once
#include "CoreMinimal.h"
#include "KorsicaCircleMoveDelegateDelegate.generated.h"

class UAnimSequenceBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FKorsicaCircleMoveDelegate, bool, bIsCircleMove, UAnimSequenceBase*, PlayerAction, float, PlayRate);

