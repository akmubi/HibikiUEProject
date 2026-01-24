#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500FloatingLaserRequestInfo.h"
#include "HbkEm7500FloatingLaserRequestParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500FloatingLaserRequestParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500FloatingLaserRequestInfo RequestInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTime;
    
    HIBIKI_API FHbkEm7500FloatingLaserRequestParam();
};

