#pragma once
#include "CoreMinimal.h"
#include "HbkScaleAnimBoneAxisInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkScaleAnimBoneAxisInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool use;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool minus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float defaultScaleValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float maxScaleValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float minScaleValue;
    
    HIBIKI_API FHbkScaleAnimBoneAxisInfo_t();
};

