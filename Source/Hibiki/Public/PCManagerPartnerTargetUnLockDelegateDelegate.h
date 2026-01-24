#pragma once
#include "CoreMinimal.h"
#include "PCManagerPartnerTargetUnLockDelegateDelegate.generated.h"

class UHbkPartnerTargetPointComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPCManagerPartnerTargetUnLockDelegate, UHbkPartnerTargetPointComponent*, PartnerTargetPointComp, bool, bEndLockOn);

