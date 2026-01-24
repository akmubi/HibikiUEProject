#pragma once
#include "CoreMinimal.h"
#include "HbkEm5000SideStoryDelegateDelegate.generated.h"

class AHbkEm5000_SideStoryControl;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkEm5000SideStoryDelegate, AHbkEm5000_SideStoryControl*, SideStoryControl);

