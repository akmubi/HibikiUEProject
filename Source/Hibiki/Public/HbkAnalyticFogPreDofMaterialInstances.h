#pragma once
#include "CoreMinimal.h"
#include "HbkAnalyticFogPreDofMaterialInstances.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FHbkAnalyticFogPreDofMaterialInstances {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> IsAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MaterialInstances;
    
    HIBIKI_API FHbkAnalyticFogPreDofMaterialInstances();
};

