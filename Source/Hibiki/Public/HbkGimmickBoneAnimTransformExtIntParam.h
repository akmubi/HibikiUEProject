#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBoneAnimTransformParam.h"
#include "HbkGimmickBoneAnimTransformExtIntParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickBoneAnimTransformExtIntParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickBoneAnimTransformParam> TransformParams;
    
    HIBIKI_API FHbkGimmickBoneAnimTransformExtIntParam();
};

