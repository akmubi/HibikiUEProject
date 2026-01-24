#pragma once
#include "CoreMinimal.h"
#include "GameRulePhotoModeDelegateDelegate.generated.h"

class UHbkGameRuleManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameRulePhotoModeDelegate, UHbkGameRuleManager*, Sender);

