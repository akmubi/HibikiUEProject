#pragma once
#include "CoreMinimal.h"
#include "HbkGlobalAnalyticFog.generated.h"

class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct FHbkGlobalAnalyticFog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* AnalyticFogMPC;
    
    HIBIKI_API FHbkGlobalAnalyticFog();
};

