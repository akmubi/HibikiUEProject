#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBoneRotateAnimData_t.h"
#include "HbkGimmickMoveAnimCommonInfo_t.h"
#include "HbkGimmickRotateAnimData_t.h"
#include "HbkGimmickRotateAnimInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickRotateAnimInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickMoveAnimCommonInfo_t commonInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickRotateAnimData_t actorRotateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickBoneRotateAnimData_t> boneRotateInfo;
    
    HIBIKI_API FHbkGimmickRotateAnimInfo_t();
};

