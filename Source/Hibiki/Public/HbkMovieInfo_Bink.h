#pragma once
#include "CoreMinimal.h"
#include "HbkMovieInfo_Bink.generated.h"

USTRUCT(BlueprintType)
struct FHbkMovieInfo_Bink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FilePath_4k;
    
    HIBIKI_API FHbkMovieInfo_Bink();
};

