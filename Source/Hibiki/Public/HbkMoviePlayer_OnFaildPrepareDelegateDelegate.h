#pragma once
#include "CoreMinimal.h"
#include "HbkMoviePlayer_OnFaildPrepareDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkMoviePlayer_OnFaildPrepareDelegate, const FString&, OpenedUrl);

