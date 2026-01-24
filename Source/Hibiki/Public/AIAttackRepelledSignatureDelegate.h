#pragma once
#include "CoreMinimal.h"
#include "AIAttackRepelledSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIAttackRepelledSignature, const AActor*, Blocker);

