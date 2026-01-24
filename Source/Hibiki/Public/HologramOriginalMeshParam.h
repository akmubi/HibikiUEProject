#pragma once
#include "CoreMinimal.h"
#include "HologramOriginalMeshParam.generated.h"

class UMaterialInstanceDynamic;
class UMeshComponent;

USTRUCT(BlueprintType)
struct FHologramOriginalMeshParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMeshComponent> MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> OriginalMaterialList;
    
    HIBIKI_API FHologramOriginalMeshParam();
};

