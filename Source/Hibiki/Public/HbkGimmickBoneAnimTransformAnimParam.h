#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBoneAnimTransformCollisionParam.h"
#include "HbkGimmickBoneAnimTransformExtIntParam.h"
#include "HbkGimmickBoneAnimTransformParam.h"
#include "HbkGimmickBoneAnimTransformAnimParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickBoneAnimTransformAnimParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickBoneAnimTransformParam> DefaultParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickBoneAnimTransformParam> ActivateParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickBoneAnimTransformParam> DeactivateParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickBoneAnimTransformParam> BeginBattleParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickBoneAnimTransformParam> EndBattleParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickBoneAnimTransformCollisionParam> HitBeginParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickBoneAnimTransformCollisionParam> HitEndParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickBoneAnimTransformExtIntParam> ActivateExtIntParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickBoneAnimTransformExtIntParam> DeactivateExtIntParams;
    
    HIBIKI_API FHbkGimmickBoneAnimTransformAnimParam();
};

