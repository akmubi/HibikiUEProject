#pragma once
#include "CoreMinimal.h"
#include "Np0600RDSecretBoxResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNp0600RDSecretBoxResultDelegate, bool, bSuccess);

