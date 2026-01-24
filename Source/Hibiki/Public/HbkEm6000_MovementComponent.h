#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyMovementComponent.h"
#include "HbkEm6000_MovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkEm6000_MovementComponent : public UHbkEnemyMovementComponent {
    GENERATED_BODY()
public:
    UHbkEm6000_MovementComponent(const FObjectInitializer& ObjectInitializer);

};

