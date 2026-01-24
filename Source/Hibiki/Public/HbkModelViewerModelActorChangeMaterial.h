#pragma once
#include "CoreMinimal.h"
#include "HbkModelViewerModelActorChangeMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FHbkModelViewerModelActorChangeMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    HIBIKI_API FHbkModelViewerModelActorChangeMaterial();
};

