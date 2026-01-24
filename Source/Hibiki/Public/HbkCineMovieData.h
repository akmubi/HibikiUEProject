#pragma once
#include "CoreMinimal.h"
#include "HbkCineMovieData.generated.h"

USTRUCT(BlueprintType)
struct FHbkCineMovieData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BinkMoviePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BinkMoviePathHighRes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableHighRes;
    
    HIBIKI_API FHbkCineMovieData();
};

