#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_LightStandMaterialParamInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_LightStandMaterialParamInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    HIBIKI_API FHbkGimmick_LightStandMaterialParamInfo_t();
};

