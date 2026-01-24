#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBoneTransAnimData_t.h"
#include "HbkGimmickMoveAnimCommonInfo_t.h"
#include "HbkGimmickTransAnimData_t.h"
#include "HbkGimmickTransAnimInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickTransAnimInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickMoveAnimCommonInfo_t commonInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickTransAnimData_t actorTransData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickBoneTransAnimData_t> boneTransInfo;
    
    HIBIKI_API FHbkGimmickTransAnimInfo_t();
};

