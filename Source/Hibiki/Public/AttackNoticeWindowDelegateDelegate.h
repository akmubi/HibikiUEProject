#pragma once
#include "CoreMinimal.h"
#include "AttackNoticeWindowDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackNoticeWindowDelegate, int32, NoticeNum);

