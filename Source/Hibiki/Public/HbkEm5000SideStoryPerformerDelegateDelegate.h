#pragma once
#include "CoreMinimal.h"
#include "HbkSideStoryPerformer.h"
#include "HbkEm5000SideStoryPerformerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkEm5000SideStoryPerformerDelegate, const FHbkSideStoryPerformer&, Performer);

