#pragma once
#include "CoreMinimal.h"
#include "HbkQualityPresetNVIDIAReflex.generated.h"

USTRUCT(BlueprintType)
struct FHbkQualityPresetNVIDIAReflex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Mode;
    
    HIBIKI_API FHbkQualityPresetNVIDIAReflex();
};

