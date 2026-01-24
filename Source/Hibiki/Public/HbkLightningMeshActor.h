#pragma once
#include "CoreMinimal.h"
#include "HbkStaticMeshActor.h"
#include "HbkLightningMeshActor.generated.h"

UCLASS(Blueprintable)
class AHbkLightningMeshActor : public AHbkStaticMeshActor {
    GENERATED_BODY()
public:
    AHbkLightningMeshActor(const FObjectInitializer& ObjectInitializer);

};

