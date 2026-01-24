#pragma once
#include "CoreMinimal.h"
#include "HbkCostumeStoreSelectDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkCostumeStoreSelectDelegate, int32, AddIndex);

