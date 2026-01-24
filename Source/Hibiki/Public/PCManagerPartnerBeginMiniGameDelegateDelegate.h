#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerType.h"
#include "PCManagerPartnerBeginMiniGameDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPCManagerPartnerBeginMiniGameDelegate, EHbkPartnerType, PartnerType);

