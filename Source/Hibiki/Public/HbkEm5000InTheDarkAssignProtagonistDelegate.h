#pragma once
#include "CoreMinimal.h"
#include "HbkInTheDarkPerformer.h"
#include "HbkEm5000InTheDarkAssignProtagonistDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkEm5000InTheDarkAssignProtagonist, const FHbkInTheDarkPerformer&, Performer);

