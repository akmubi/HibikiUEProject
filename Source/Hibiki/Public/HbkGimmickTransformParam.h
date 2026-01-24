#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickTransformExtIntParam.h"
#include "HbkGimmickTransformMeshParam.h"
#include "HbkGimmickTransformParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickTransformParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickTransformMeshParam ActivateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickTransformMeshParam DeactivateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickTransformExtIntParam> ActivateExtIntParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickTransformExtIntParam> DeactivateExtIntParams;
    
    HIBIKI_API FHbkGimmickTransformParam();
};

