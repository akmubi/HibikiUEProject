#pragma once
#include "CoreMinimal.h"
#include "Np0600SecretBoxResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNp0600SecretBoxResultDelegate, bool, bSuccess);

