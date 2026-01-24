#pragma once
#include "CoreMinimal.h"
#include "HbkTaskHowtoPlaySelectContentDelegateDelegate.generated.h"

class UHbkHowtoPlayItemBaseWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTaskHowtoPlaySelectContentDelegate, UHbkHowtoPlayItemBaseWidget*, ItemWidget);

