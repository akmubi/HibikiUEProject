#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_AirShooterLuggagePoint.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_AirShooterLuggagePoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    HIBIKI_API FHbkGimmick_AirShooterLuggagePoint();
};

