#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickAnimationFlickCollisionParam_t.h"
#include "HbkGimmickAnimationFlickExtIntParam_t.h"
#include "HbkGimmickAnimationFlickParam_t.h"
#include "HbkGimmickAnimationFlickInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickAnimationFlickInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationFlickParam_t> DefaultParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationFlickParam_t> ActivateParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationFlickParam_t> DeactivateParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationFlickParam_t> BeginBattleParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationFlickParam_t> EndBattleParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationFlickCollisionParam_t> HitBeginParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationFlickCollisionParam_t> HitEndParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationFlickExtIntParam_t> ActivateExtIntParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationFlickExtIntParam_t> DeactivateExtIntParamArray;
    
    HIBIKI_API FHbkGimmickAnimationFlickInfo_t();
};

