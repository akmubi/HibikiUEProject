#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickAnimationTransformCollisionParam_t.h"
#include "HbkGimmickAnimationTransformExtIntParam_t.h"
#include "HbkGimmickAnimationTransformParam_t.h"
#include "HbkGimmickAnimationTransformInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickAnimationTransformInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationTransformParam_t> DefaultParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationTransformParam_t> ActivateParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationTransformParam_t> DeactivateParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationTransformParam_t> BeginBattleParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationTransformParam_t> EndBattleParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationTransformCollisionParam_t> HitBeginParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationTransformCollisionParam_t> HitEndParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationTransformExtIntParam_t> ActivateExtIntParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationTransformExtIntParam_t> DeactivateExtIntParamArray;
    
    HIBIKI_API FHbkGimmickAnimationTransformInfo_t();
};

