#pragma once
#include "CoreMinimal.h"
#include "EHbkCostumePart.h"
#include "PreviewCostumeApplyPartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPreviewCostumeApplyPart, EHbkCostumePart, ApplyCostumePart);

