#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_bg0180_LightMaterialInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_bg0180_LightMaterialInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useBaseColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useEmissiveColor;
    
    HIBIKI_API FHbkGimmick_bg0180_LightMaterialInfo_t();
};

