#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_StalactiteExplosionMesh.h"
#include "HbkGimmick_StalactiteExplosion.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_StalactiteExplosion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Impulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_StalactiteExplosionMesh> ExplosionMeshes;
    
    HIBIKI_API FHbkGimmick_StalactiteExplosion();
};

