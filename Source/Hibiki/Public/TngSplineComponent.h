#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "TngSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UTngSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseSplineRadius;
    
public:
    UTngSplineComponent(const FObjectInitializer& ObjectInitializer);

};

