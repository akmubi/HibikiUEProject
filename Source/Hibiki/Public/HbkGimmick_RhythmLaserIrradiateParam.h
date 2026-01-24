#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RhythmLaserIrradiateParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_RhythmLaserIrradiateParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    HIBIKI_API FHbkGimmick_RhythmLaserIrradiateParam();
};

