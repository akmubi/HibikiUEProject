#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelStreamingVolume.h"
#include "HbkLevelStreamingVolume.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkLevelStreamingVolume : public ALevelStreamingVolume {
    GENERATED_BODY()
public:
    AHbkLevelStreamingVolume(const FObjectInitializer& ObjectInitializer);

};

