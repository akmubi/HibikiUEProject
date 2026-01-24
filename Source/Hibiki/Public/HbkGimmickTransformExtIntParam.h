#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickTransformMeshParam.h"
#include "HbkGimmickTransformExtIntParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickTransformExtIntParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickTransformMeshParam Param;
    
    HIBIKI_API FHbkGimmickTransformExtIntParam();
};

