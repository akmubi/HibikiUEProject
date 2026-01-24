#pragma once
#include "CoreMinimal.h"
#include "RSSNoteSyncMulticastDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRSSNoteSyncMulticastDelegate, int32, NoteCount, bool, bDownBeat);

