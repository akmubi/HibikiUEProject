#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickVisibilityMeshParam.h"
#include "HbkGimmickVisibilityExtIntParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickVisibilityExtIntParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickVisibilityMeshParam Param;
    
    HIBIKI_API FHbkGimmickVisibilityExtIntParam();
};

