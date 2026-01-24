#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameRuleResetPlayerPosDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameRuleResetPlayerPosDelegate, const FTransform&, Transform, const FGameplayTagContainer&, AgentTags);

