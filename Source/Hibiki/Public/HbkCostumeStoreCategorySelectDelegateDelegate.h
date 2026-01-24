#pragma once
#include "CoreMinimal.h"
#include "HbkCostumeStoreCategorySelectDelegateDelegate.generated.h"

class UHbkChaiCostumePartWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkCostumeStoreCategorySelectDelegate, UHbkChaiCostumePartWidget*, CategoryWidget);

