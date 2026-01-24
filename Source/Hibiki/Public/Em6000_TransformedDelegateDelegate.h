#pragma once
#include "CoreMinimal.h"
#include "EHbkEm6000_BodyMeshType.h"
#include "Em6000_TransformedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEm6000_TransformedDelegate, EHbkEm6000_BodyMeshType, BodyMeshType);

