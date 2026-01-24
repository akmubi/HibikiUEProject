#pragma once
#include "CoreMinimal.h"
#include "HbkTalkableBeginTalkDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTalkableBeginTalk, AActor*, Talker);

