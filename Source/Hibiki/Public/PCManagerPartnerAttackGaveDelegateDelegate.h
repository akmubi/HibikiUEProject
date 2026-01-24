#pragma once
#include "CoreMinimal.h"
#include "PCManagerPartnerAttackGaveDelegateDelegate.generated.h"

class UDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPCManagerPartnerAttackGaveDelegate, const UDamageType*, DamageType);

