#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RhythmLaserIrradiateParam.h"
#include "HbkGimmick_RhythmLaserIrradiateParamExtInt.h"
#include "HbkGimmick_RhythmLaserLayout.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_RhythmLaserLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LaserVerticalNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserVerticalRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LaserHorizontalNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_RhythmLaserIrradiateParam> DefaultIrradiateParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_RhythmLaserIrradiateParamExtInt> ActivateExtIntIrradiateParams;
    
    HIBIKI_API FHbkGimmick_RhythmLaserLayout();
};

