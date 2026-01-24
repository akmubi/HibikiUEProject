#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BPMRushSpectrumMesh.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FHbkGimmick_BPMRushSpectrumMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpectrumIndex;
    
    HIBIKI_API FHbkGimmick_BPMRushSpectrumMesh();
};

