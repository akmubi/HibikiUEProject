#pragma once
#include "CoreMinimal.h"
#include "HbkCostumeMeshMIDFacade.h"
#include "HbkMainMeshMIDFacade.h"
#include "HbkAllCostumeMeshMIDFacade.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FHbkAllCostumeMeshMIDFacade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkMainMeshMIDFacade MainMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkCostumeMeshMIDFacade> CostumeMeshMIDFacades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> MeshComponents;
    
    HIBIKI_API FHbkAllCostumeMeshMIDFacade();
};

