#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500FloatingLaserKinds.h"
#include "HbkEm7500FloatingLaserInfo.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEm7500FloatingLaserInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500FloatingLaserKinds> Kinds;
    
    FHbkEm7500FloatingLaserInfo();
};

