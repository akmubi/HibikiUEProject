#pragma once
#include "CoreMinimal.h"
#include "HbkQualityPresetTexture.generated.h"

USTRUCT(BlueprintType)
struct FHbkQualityPresetTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TextureQuality;
    
    HIBIKI_API FHbkQualityPresetTexture();
};

