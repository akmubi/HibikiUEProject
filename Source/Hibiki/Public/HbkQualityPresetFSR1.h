#pragma once
#include "CoreMinimal.h"
#include "HbkQualityPresetFSR1.generated.h"

USTRUCT(BlueprintType)
struct FHbkQualityPresetFSR1 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenPercentage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MipMapLODBias;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PostProcessAAQuality;
    
    HIBIKI_API FHbkQualityPresetFSR1();
};

