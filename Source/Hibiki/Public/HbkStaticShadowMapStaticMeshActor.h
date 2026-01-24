#pragma once
#include "CoreMinimal.h"
#include "HbkStaticMeshActor.h"
#include "HbkStaticShadowMapStaticMeshActor.generated.h"

UCLASS(Blueprintable)
class AHbkStaticShadowMapStaticMeshActor : public AHbkStaticMeshActor {
    GENERATED_BODY()
public:
    AHbkStaticShadowMapStaticMeshActor(const FObjectInitializer& ObjectInitializer);

};

