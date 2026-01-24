#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerAttackType.h"
#include "EHbkPartnerType.h"
#include "PCManagerPartnerAttackDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPCManagerPartnerAttackDelegate, EHbkPartnerType, PartnerType, EHbkPartnerAttackType, AttackType);

