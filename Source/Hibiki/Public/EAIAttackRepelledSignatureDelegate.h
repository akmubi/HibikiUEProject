#pragma once
#include "CoreMinimal.h"
#include "EAIAttackRepelledSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEAIAttackRepelledSignature, const AActor*, Blocker);

