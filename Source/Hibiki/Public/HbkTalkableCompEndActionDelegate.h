#pragma once
#include "CoreMinimal.h"
#include "HbkTalkableInfo_t.h"
#include "HbkTalkableCompEndActionDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHbkTalkableCompEndAction, AActor*, pActor, const FHbkTalkableInfo_t&, TalkInfo);

