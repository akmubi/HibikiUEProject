#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_WallPanelMaterial.h"
#include "HbkGimmick_WallPanelMesh.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FHbkGimmick_WallPanelMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_WallPanelMaterial> Materials;
    
    HIBIKI_API FHbkGimmick_WallPanelMesh();
};

