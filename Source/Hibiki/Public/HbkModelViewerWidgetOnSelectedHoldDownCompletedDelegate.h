#pragma once
#include "CoreMinimal.h"
#include "HbkModelViewerWidgetOnSelectedHoldDownCompletedDelegate.generated.h"

class UHbkModelViewerModelIconWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkModelViewerWidgetOnSelectedHoldDownCompleted, UHbkModelViewerModelIconWidget*, IconWidget);

