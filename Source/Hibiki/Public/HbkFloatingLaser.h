#pragma once
#include "CoreMinimal.h"
#include "HbkFloatingLaser.generated.h"

class AHbkEm6000_FloatingLaser;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkFloatingLaser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_FloatingLaser> Actor;
    
    FHbkFloatingLaser();
};

