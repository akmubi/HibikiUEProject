#pragma once
#include "CoreMinimal.h"
#include "HbkFlashLightAtkTagMaterialInfo_t.h"
#include "HbkFlashLigntAtkTagMeshInfo_t.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FHbkFlashLigntAtkTagMeshInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkFlashLightAtkTagMaterialInfo_t> matInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pMesh;
    
    HIBIKI_API FHbkFlashLigntAtkTagMeshInfo_t();
};

