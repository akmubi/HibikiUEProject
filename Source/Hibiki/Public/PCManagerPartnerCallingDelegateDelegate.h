#pragma once
#include "CoreMinimal.h"
#include "PCManagerPartnerCallingDelegateDelegate.generated.h"

class AHbkPartnerCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPCManagerPartnerCallingDelegate, int32, Index, AHbkPartnerCharacterBase*, CallingPartner);

