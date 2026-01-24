#pragma once
#include "CoreMinimal.h"
#include "PCManagerPartnerTargetLockonDelegateDelegate.generated.h"

class UHbkPartnerTargetPointComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPCManagerPartnerTargetLockonDelegate, UHbkPartnerTargetPointComponent*, PartnerTargetPointComp);

