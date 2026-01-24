#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RockfallSpawnerProduct.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_RockfallSpawnerProduct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ProductionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Ratio;
    
    HIBIKI_API FHbkGimmick_RockfallSpawnerProduct();
};

