#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkPlayerSoundComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayerSoundComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UHbkPlayerSoundComponent(const FObjectInitializer& ObjectInitializer);

};

