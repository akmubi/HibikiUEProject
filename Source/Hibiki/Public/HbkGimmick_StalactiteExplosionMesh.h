#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_StalactiteExplosionMesh.generated.h"

class UHbkStaticMeshComponent;

USTRUCT(BlueprintType)
struct FHbkGimmick_StalactiteExplosionMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStaticMeshComponent* MeshComp;
    
    HIBIKI_API FHbkGimmick_StalactiteExplosionMesh();
};

