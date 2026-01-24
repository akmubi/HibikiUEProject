#pragma once
#include "CoreMinimal.h"
#include "RestartBossBattleDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRestartBossBattle, int32, Phase);

