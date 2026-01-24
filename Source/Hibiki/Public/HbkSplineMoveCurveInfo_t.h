#pragma once
#include "CoreMinimal.h"
#include "HbkSplineMoveCurveInfo_t.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkSplineMoveCurveInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 curveIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> PointSE;
    
    HIBIKI_API FHbkSplineMoveCurveInfo_t();
};

