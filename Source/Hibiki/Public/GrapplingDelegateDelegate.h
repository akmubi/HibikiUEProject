#pragma once
#include "CoreMinimal.h"
#include "HbkGrapplingInfo.h"
#include "GrapplingDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGrapplingDelegate, const FHbkGrapplingInfo&, GrapplingInfo);

