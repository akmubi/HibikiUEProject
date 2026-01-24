#pragma once
#include "CoreMinimal.h"
#include "HbkFloatingLaserPoint.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkFloatingLaserPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> SceneComponents;
    
    FHbkFloatingLaserPoint();
};

