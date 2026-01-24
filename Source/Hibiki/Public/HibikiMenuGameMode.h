#pragma once
#include "CoreMinimal.h"
#include "HbkGameModeBase.h"
#include "HibikiMenuGameMode.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AHibikiMenuGameMode : public AHbkGameModeBase {
    GENERATED_BODY()
public:
    AHibikiMenuGameMode(const FObjectInitializer& ObjectInitializer);

};

