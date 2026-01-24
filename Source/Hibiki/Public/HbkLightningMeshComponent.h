#pragma once
#include "CoreMinimal.h"
#include "HbkStaticMeshComponent.h"
#include "HbkLightningMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkLightningMeshComponent : public UHbkStaticMeshComponent {
    GENERATED_BODY()
public:
    UHbkLightningMeshComponent(const FObjectInitializer& ObjectInitializer);

};

