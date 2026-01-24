#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerType.h"
#include "HbkCostumeStoreTabSelectDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkCostumeStoreTabSelectDelegate, EHbkPartnerType, CharaType);

