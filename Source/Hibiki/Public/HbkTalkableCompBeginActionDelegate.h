#pragma once
#include "CoreMinimal.h"
#include "HbkTalkableTalkData_t.h"
#include "HbkTalkableCompBeginActionDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHbkTalkableCompBeginAction, AActor*, pActor, const FHbkTalkableTalkData_t&, TalkData);

