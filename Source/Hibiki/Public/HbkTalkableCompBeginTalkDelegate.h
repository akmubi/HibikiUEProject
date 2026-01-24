#pragma once
#include "CoreMinimal.h"
#include "HbkTalkableTalkData_t.h"
#include "HbkTalkableCompBeginTalkDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHbkTalkableCompBeginTalk, AActor*, Talker, const FHbkTalkableTalkData_t&, TalkData);

