#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBoneScaleAnimData_t.h"
#include "HbkGimmickMoveAnimCommonInfo_t.h"
#include "HbkGimmickScaleAnimData_t.h"
#include "HbkGimmickScaleAnimInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickScaleAnimInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickMoveAnimCommonInfo_t commonInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickScaleAnimData_t actorScaleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickBoneScaleAnimData_t> boneScaleInfo;
    
    HIBIKI_API FHbkGimmickScaleAnimInfo_t();
};

