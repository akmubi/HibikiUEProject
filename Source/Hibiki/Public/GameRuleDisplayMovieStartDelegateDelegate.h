#pragma once
#include "CoreMinimal.h"
#include "GameRuleDisplayMovieStartDelegateDelegate.generated.h"

class UTexture;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameRuleDisplayMovieStartDelegate, UTexture*, NewMediaTexture);

