#pragma once
#include "CoreMinimal.h"
#include "HbkScaleAnimBoneAxisInfo_t.h"
#include "HbkScaleAnimBoneInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkScaleAnimBoneInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkScaleAnimBoneAxisInfo_t scaleX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkScaleAnimBoneAxisInfo_t scaleY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkScaleAnimBoneAxisInfo_t scaleZ;
    
    HIBIKI_API FHbkScaleAnimBoneInfo_t();
};

