#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkEm6000_DirectAttackComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkEm6000_DirectAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UHbkEm6000_DirectAttackComponent(const FObjectInitializer& ObjectInitializer);

};

