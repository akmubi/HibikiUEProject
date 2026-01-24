#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickRotateAnimInfo_t.h"
#include "HbkGimmickScaleAnimInfo_t.h"
#include "HbkGimmickTransAnimInfo_t.h"
#include "HbkGimmickBattleInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickBattleInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickScaleAnimInfo_t ScaleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickTransAnimInfo_t TransInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickRotateAnimInfo_t RotateInfo;
    
    HIBIKI_API FHbkGimmickBattleInfo_t();
};

