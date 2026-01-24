#pragma once
#include "CoreMinimal.h"
#include "GameRuleCreatedHowToPlayDelegateDelegate.generated.h"

class UHbkHowToPlayController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameRuleCreatedHowToPlayDelegate, UHbkHowToPlayController*, HowToPlayController);

