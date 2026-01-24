#pragma once
#include "CoreMinimal.h"
#include "HbkTaskNewTutorialOnChangePageDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTaskNewTutorialOnChangePageDelegate, int32, CurrentHierarchyNum);

