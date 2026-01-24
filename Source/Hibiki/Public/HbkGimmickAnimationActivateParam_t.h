#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickAnimationActivateType_t.h"
#include "HbkGimmickAnimationActivateParam_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickAnimationActivateParam_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickAnimationActivateType_t ActType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    HIBIKI_API FHbkGimmickAnimationActivateParam_t();
};

