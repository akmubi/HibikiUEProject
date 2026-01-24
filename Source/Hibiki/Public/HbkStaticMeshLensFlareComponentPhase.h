#pragma once
#include "CoreMinimal.h"
#include "HbkStaticMeshLensFlareComponentPhase.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FHbkStaticMeshLensFlareComponentPhase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameEnvPhaseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialInstance;
    
    HIBIKI_API FHbkStaticMeshLensFlareComponentPhase();
};

