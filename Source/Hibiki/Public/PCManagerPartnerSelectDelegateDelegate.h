#pragma once
#include "CoreMinimal.h"
#include "PCManagerPartnerSelectDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPCManagerPartnerSelectDelegate, int32, Index);

