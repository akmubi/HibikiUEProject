#pragma once
#include "CoreMinimal.h"
#include "HbkCostumeMeshMIDFacade.generated.h"

class UHbkCostumeMeshComponent;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FHbkCostumeMeshMIDFacade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkCostumeMeshComponent* CostumeMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MIDs;
    
    HIBIKI_API FHbkCostumeMeshMIDFacade();
};

