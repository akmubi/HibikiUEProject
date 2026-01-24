#pragma once
#include "CoreMinimal.h"
#include "HbkProjectile.h"
#include "HbkProjectileWithoutMesh.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkProjectileWithoutMesh : public AHbkProjectile {
    GENERATED_BODY()
public:
    AHbkProjectileWithoutMesh(const FObjectInitializer& ObjectInitializer);

};

