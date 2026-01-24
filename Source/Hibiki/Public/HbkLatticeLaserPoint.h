#pragma once
#include "CoreMinimal.h"
#include "HbkLatticeLaserPoint.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkLatticeLaserPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BeginSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* EndSceneComponent;
    
    FHbkLatticeLaserPoint();
};

