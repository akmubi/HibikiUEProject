#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmTowerStoreWidgetOnPurchaseProductDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(float, FHbkRhythmTowerStoreWidgetOnPurchaseProduct, const FText&, ProductName, float, CostTime);

