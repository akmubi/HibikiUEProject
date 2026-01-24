#pragma once
#include "CoreMinimal.h"
#include "PCManagerMoneyChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPCManagerMoneyChangeDelegate, int32, ChangeMoney, int32, TotalMoney);

