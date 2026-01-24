#pragma once
#include "CoreMinimal.h"
#include "GameRuleEndMovieDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameRuleEndMovieDelegate, bool, bSkip);

