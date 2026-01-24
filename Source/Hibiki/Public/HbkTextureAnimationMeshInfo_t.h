#pragma once
#include "CoreMinimal.h"
#include "HbkTextureAnimationMatInfo_t.h"
#include "HbkTextureAnimationMeshInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkTextureAnimationMeshInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTextureAnimationMatInfo_t> MatParamArray;
    
    HIBIKI_API FHbkTextureAnimationMeshInfo_t();
};

