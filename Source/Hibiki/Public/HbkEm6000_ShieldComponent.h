#pragma once
#include "CoreMinimal.h"
#include "HbkShieldComponent.h"
#include "HbkEm6000_ShieldComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkEm6000_ShieldComponent : public UHbkShieldComponent {
    GENERATED_BODY()
public:
    UHbkEm6000_ShieldComponent(const FObjectInitializer& ObjectInitializer);

};

