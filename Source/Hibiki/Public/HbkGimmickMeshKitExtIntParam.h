#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickMeshKitMeshParam.h"
#include "HbkGimmickMeshKitExtIntParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickMeshKitExtIntParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickMeshKitMeshParam Param;
    
    HIBIKI_API FHbkGimmickMeshKitExtIntParam();
};

