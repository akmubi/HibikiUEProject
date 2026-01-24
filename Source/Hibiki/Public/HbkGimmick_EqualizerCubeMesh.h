#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_EqualizerCubeMesh.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FHbkGimmick_EqualizerCubeMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RotationMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* RotationMeshComp;
    
    HIBIKI_API FHbkGimmick_EqualizerCubeMesh();
};

