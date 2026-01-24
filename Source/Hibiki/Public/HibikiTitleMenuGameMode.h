#pragma once
#include "CoreMinimal.h"
#include "HibikiGameMode.h"
#include "HibikiTitleMenuGameMode.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AHibikiTitleMenuGameMode : public AHibikiGameMode {
    GENERATED_BODY()
public:
    AHibikiTitleMenuGameMode(const FObjectInitializer& ObjectInitializer);

};

