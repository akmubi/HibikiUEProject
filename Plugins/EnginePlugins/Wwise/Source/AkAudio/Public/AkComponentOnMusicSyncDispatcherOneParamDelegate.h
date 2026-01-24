#pragma once
#include "CoreMinimal.h"
#include "AkComponentOnMusicSyncDispatcherOneParamDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAkComponentOnMusicSyncDispatcherOneParam, const FString&, UserCue);

