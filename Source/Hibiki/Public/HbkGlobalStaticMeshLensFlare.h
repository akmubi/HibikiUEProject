#pragma once
#include "CoreMinimal.h"
#include "HbkGlobalStaticMeshLensFlare.generated.h"

class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct FHbkGlobalStaticMeshLensFlare {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* LensFlareMPC;
    
    HIBIKI_API FHbkGlobalStaticMeshLensFlare();
};

