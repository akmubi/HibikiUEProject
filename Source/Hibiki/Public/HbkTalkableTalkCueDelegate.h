#pragma once
#include "CoreMinimal.h"
#include "HbkTalkableTalkCueDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHbkTalkableTalkCue, AActor*, Talker, const FName, TalkCue);

