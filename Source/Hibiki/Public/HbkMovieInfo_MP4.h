#pragma once
#include "CoreMinimal.h"
#include "HbkMovieInfo_MP4.generated.h"

class UFileMediaSource;

USTRUCT(BlueprintType)
struct FHbkMovieInfo_MP4 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFileMediaSource* MediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFileMediaSource* MediaSource_4k;
    
    HIBIKI_API FHbkMovieInfo_MP4();
};

