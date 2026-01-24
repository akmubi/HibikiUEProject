#pragma once
#include "CoreMinimal.h"
#include "HbkEm5000BeatSpectrumInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm5000BeatSpectrumInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Correction;
    
    HIBIKI_API FHbkEm5000BeatSpectrumInfo();
};

