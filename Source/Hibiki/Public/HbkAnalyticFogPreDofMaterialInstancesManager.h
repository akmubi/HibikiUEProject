#pragma once
#include "CoreMinimal.h"
#include "HbkAnalyticFogPreDofMaterialInstances.h"
#include "HbkAnalyticFogPreDofMaterialInstancesManager.generated.h"

USTRUCT(BlueprintType)
struct FHbkAnalyticFogPreDofMaterialInstancesManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkAnalyticFogPreDofMaterialInstances TypeNone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkAnalyticFogPreDofMaterialInstances TypePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkAnalyticFogPreDofMaterialInstances TypeSpot;
    
    HIBIKI_API FHbkAnalyticFogPreDofMaterialInstancesManager();
};

