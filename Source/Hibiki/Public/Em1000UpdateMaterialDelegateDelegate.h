#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Em1000UpdateMaterialDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEm1000UpdateMaterialDelegate, const FLinearColor&, SpectrumInfo, float, BeatSignEmissiveValue);

