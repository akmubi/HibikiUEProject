#pragma once
#include "CoreMinimal.h"
#include "HbkFloatingLaserMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FHbkFloatingLaserMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* WingMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TipMaterial;
    
    HIBIKI_API FHbkFloatingLaserMaterial();
};

