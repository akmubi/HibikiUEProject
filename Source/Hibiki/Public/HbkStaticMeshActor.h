#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "HbkStaticMeshActor.generated.h"

UCLASS(Blueprintable)
class AHbkStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    AHbkStaticMeshActor(const FObjectInitializer& ObjectInitializer);

};

