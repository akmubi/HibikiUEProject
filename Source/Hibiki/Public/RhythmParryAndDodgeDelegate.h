#pragma once
#include "CoreMinimal.h"
#include "EAttackNoticeType.h"
#include "RhythmParryAndDodgeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRhythmParryAndDodge, EAttackNoticeType, NoticeType);

