#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_PendulumMesh.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_PendulumMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    HIBIKI_API FHbkGimmick_PendulumMesh();
};

