#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyMovementComponent.h"
#include "HbkEm7500_MovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkEm7500_MovementComponent : public UHbkEnemyMovementComponent {
    GENERATED_BODY()
public:
    UHbkEm7500_MovementComponent(const FObjectInitializer& ObjectInitializer);

};

