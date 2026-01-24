#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerType.h"
#include "PCManagerPartnerEndMiniGameDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPCManagerPartnerEndMiniGameDelegate, EHbkPartnerType, PartnerType, bool, bSuccess);

