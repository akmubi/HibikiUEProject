#pragma once
#include "CoreMinimal.h"
#include "HbkTalkableInfo_t.h"
#include "HbkTalkableCompEndTalkDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHbkTalkableCompEndTalk, AActor*, Talker, const FName, TalkResultOption, const FHbkTalkableInfo_t&, TalkInfo);

