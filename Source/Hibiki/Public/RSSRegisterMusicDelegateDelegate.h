#pragma once
#include "CoreMinimal.h"
#include "RSSRegisterMusicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSSRegisterMusicDelegate, int32, MusicId);

