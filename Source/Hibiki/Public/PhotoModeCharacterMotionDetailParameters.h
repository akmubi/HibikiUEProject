#pragma once
#include "CoreMinimal.h"
#include "PhotoModeCharacterMotionDetailParameter.h"
#include "PhotoModeCharacterMotionDetailParameters.generated.h"

USTRUCT(BlueprintType)
struct FPhotoModeCharacterMotionDetailParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhotoModeCharacterMotionDetailParameter> List;
    
    HIBIKI_API FPhotoModeCharacterMotionDetailParameters();
};

