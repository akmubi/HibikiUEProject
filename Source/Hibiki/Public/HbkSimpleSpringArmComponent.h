#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "HbkSimpleSpringArmComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkSimpleSpringArmComponent : public USpringArmComponent {
    GENERATED_BODY()
public:
    UHbkSimpleSpringArmComponent(const FObjectInitializer& ObjectInitializer);

};

