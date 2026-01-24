#pragma once
#include "CoreMinimal.h"
#include "HbkInTheDarkPerformer.h"
#include "HbkEm5000InTheDarkActionProtagonistDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkEm5000InTheDarkActionProtagonist, const FHbkInTheDarkPerformer&, Performer);

