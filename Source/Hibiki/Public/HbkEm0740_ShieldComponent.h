#pragma once
#include "CoreMinimal.h"
#include "HbkShieldComponent.h"
#include "HbkEm0740_ShieldComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkEm0740_ShieldComponent : public UHbkShieldComponent {
    GENERATED_BODY()
public:
    UHbkEm0740_ShieldComponent(const FObjectInitializer& ObjectInitializer);

};

