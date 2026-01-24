#pragma once
#include "CoreMinimal.h"
#include "EHbkEm5000Style.h"
#include "Em5000SetStyleDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEm5000SetStyleDelegate, EHbkEm5000Style, Style);

