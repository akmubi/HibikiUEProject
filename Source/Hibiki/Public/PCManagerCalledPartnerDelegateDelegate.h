#pragma once
#include "CoreMinimal.h"
#include "PCManagerCalledPartnerDelegateDelegate.generated.h"

class AHbkPartnerCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPCManagerCalledPartnerDelegate, AHbkPartnerCharacterBase*, CalledPartner, bool, bIsAction);

