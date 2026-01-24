#pragma once
#include "CoreMinimal.h"
#include "PlayDamageAnimationDelegate.generated.h"

class UHbkCharacterAnimInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayDamageAnimation, UHbkCharacterAnimInstance*, AnimInstance, float, PlayRate);

