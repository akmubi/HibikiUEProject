#pragma once
#include "CoreMinimal.h"
#include "HbkInTheDarkPerformer.h"
#include "HbkEm5000InTheDarkAppearSupportingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkEm5000InTheDarkAppearSupporting, const FHbkInTheDarkPerformer&, Performer);

