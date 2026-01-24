#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerAttackType.h"
#include "EHbkPartnerType.h"
#include "Em6000_BeginPartnerAttackDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FEm6000_BeginPartnerAttackDelegate, EHbkPartnerType, PartnerType, EHbkPartnerAttackType, PartnerAttackType);

