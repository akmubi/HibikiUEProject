#pragma once
#include "CoreMinimal.h"
#include "Components/InterpToMovementComponent.h"
#include "HbkInterpToMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkInterpToMovementComponent : public UInterpToMovementComponent {
    GENERATED_BODY()
public:
    UHbkInterpToMovementComponent(const FObjectInitializer& ObjectInitializer);

};

