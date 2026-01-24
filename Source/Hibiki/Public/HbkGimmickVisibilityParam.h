#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickVisibilityExtIntParam.h"
#include "HbkGimmickVisibilityMeshParam.h"
#include "HbkGimmickVisibilityParam.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FHbkGimmickVisibilityParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickVisibilityMeshParam DefaultParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickVisibilityMeshParam ActivateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickVisibilityMeshParam DeactivateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickVisibilityExtIntParam> ActivateExtIntParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickVisibilityExtIntParam> DeactivateExtIntParams;
    
    HIBIKI_API FHbkGimmickVisibilityParam();
};

