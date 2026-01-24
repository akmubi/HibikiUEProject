#pragma once
#include "CoreMinimal.h"
#include "HbkMoviePlayer_OnFinishPrepareDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkMoviePlayer_OnFinishPrepareDelegate, const FString&, OpenedUrl);

