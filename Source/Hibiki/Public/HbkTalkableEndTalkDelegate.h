#pragma once
#include "CoreMinimal.h"
#include "HbkTalkableEndTalkDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHbkTalkableEndTalk, AActor*, Talker, const FName, TalkResultOption);

