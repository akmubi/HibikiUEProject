#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickMeshKitExtIntParam.h"
#include "HbkGimmickMeshKitMeshParam.h"
#include "HbkGimmickMeshKitParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickMeshKitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickMeshKitMeshParam ActivateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickMeshKitMeshParam DeactivateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickMeshKitExtIntParam> ActivateExtIntParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickMeshKitExtIntParam> DeactivateExtIntParams;
    
    HIBIKI_API FHbkGimmickMeshKitParam();
};

