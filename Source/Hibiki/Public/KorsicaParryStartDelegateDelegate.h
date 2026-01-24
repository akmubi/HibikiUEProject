#pragma once
#include "CoreMinimal.h"
#include "KorsicaParryStartDelegateDelegate.generated.h"

class UAnimSequenceBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKorsicaParryStartDelegate, UAnimSequenceBase*, PlayerAction, float, PlayRate);

