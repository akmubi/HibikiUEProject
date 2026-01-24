#pragma once
#include "CoreMinimal.h"
#include "HbkFlashLightComponentMaterialFlash_t.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FHbkFlashLightComponentMaterialFlash_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName materialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float maxIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float minIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pMeshComp;
    
    HIBIKI_API FHbkFlashLightComponentMaterialFlash_t();
};

