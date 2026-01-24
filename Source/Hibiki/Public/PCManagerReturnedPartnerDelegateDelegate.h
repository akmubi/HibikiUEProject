#pragma once
#include "CoreMinimal.h"
#include "PCManagerReturnedPartnerDelegateDelegate.generated.h"

class AHbkPartnerCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPCManagerReturnedPartnerDelegate, AHbkPartnerCharacterBase*, ReturnedPartner, bool, bIsAction);

