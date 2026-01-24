#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkEm6000_StageAreaComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkEm6000_StageAreaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UHbkEm6000_StageAreaComponent(const FObjectInitializer& ObjectInitializer);

};

