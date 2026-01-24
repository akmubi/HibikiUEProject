#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceDirector.h"
#include "HbkLevelSequenceDirector.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkLevelSequenceDirector : public ULevelSequenceDirector {
    GENERATED_BODY()
public:
    UHbkLevelSequenceDirector();

    UFUNCTION(BlueprintCallable)
    void ShowBoundActors();
    
};

