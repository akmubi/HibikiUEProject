#pragma once
#include "CoreMinimal.h"
#include "HbkModelViewerWidgetOnChangeSelectDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkModelViewerWidgetOnChangeSelect, int32, NewSelectNum);

