#pragma once
#include "CoreMinimal.h"
#include "EAttackNoticeType.h"
#include "AttackNoticeCreateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackNoticeCreateDelegate, EAttackNoticeType, AttackNoticeType);

