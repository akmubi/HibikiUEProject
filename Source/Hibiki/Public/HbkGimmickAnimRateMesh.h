#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickAnimRateMesh.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickAnimRateMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    HIBIKI_API FHbkGimmickAnimRateMesh();
};

