#pragma once
#include "CoreMinimal.h"
#include "ThrowOrbitProperty.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct HIBIKI_API FThrowOrbitProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* OrbitCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distanace;
    
    FThrowOrbitProperty();
};

