#pragma once
#include "CoreMinimal.h"
#include "HbkQualityPresetDLSS.generated.h"

USTRUCT(BlueprintType)
struct FHbkQualityPresetDLSS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PostProcessAAQuality;
    
    HIBIKI_API FHbkQualityPresetDLSS();
};

