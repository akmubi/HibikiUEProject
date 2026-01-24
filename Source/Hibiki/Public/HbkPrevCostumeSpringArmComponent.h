#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "HbkPrevCostumeSpringArmComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkPrevCostumeSpringArmComponent : public USpringArmComponent {
    GENERATED_BODY()
public:
    UHbkPrevCostumeSpringArmComponent(const FObjectInitializer& ObjectInitializer);

};

