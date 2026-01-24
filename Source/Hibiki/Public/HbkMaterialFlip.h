#pragma once
#include "CoreMinimal.h"
#include "HbkMaterialFlipParam.h"
#include "HbkMaterialFlip.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FHbkMaterialFlip {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMaterialFlipParam> MaterialFlipParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DispTimeSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurPageId;
    
    HIBIKI_API FHbkMaterialFlip();
};

