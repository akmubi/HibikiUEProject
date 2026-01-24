#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_bg0210_MaterialParamInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_bg0210_MaterialParamInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    HIBIKI_API FHbkGimmick_bg0210_MaterialParamInfo_t();
};

