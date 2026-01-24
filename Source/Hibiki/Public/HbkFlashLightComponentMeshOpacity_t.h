#pragma once
#include "CoreMinimal.h"
#include "HbkFlashLightComponentMeshOpacity_t.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FHbkFlashLightComponentMeshOpacity_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName opacityMaterialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float maxOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float minOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pMeshComp;
    
    HIBIKI_API FHbkFlashLightComponentMeshOpacity_t();
};

