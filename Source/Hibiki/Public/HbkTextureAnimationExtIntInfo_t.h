#pragma once
#include "CoreMinimal.h"
#include "HbkTextureAnimationMeshInfo_t.h"
#include "HbkTextureAnimationExtIntInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkTextureAnimationExtIntInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTextureAnimationMeshInfo_t> MeshInfoArray;
    
    HIBIKI_API FHbkTextureAnimationExtIntInfo_t();
};

