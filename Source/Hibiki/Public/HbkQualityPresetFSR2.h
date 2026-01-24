#pragma once
#include "CoreMinimal.h"
#include "HbkQualityPresetFSR2.generated.h"

USTRUCT(BlueprintType)
struct FHbkQualityPresetFSR2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QualityMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PostProcessAAQuality;
    
    HIBIKI_API FHbkQualityPresetFSR2();
};

