#pragma once
#include "CoreMinimal.h"
#include "RhythmDungeonStoreDelegateDelegate.generated.h"

class UHbkRhythmDungeonStoreWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRhythmDungeonStoreDelegate, UHbkRhythmDungeonStoreWidget*, Sender);

