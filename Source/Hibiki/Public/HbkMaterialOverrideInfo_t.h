#pragma once
#include "CoreMinimal.h"
#include "HbkMaterialOverrideMatInfo_t.h"
#include "HbkMaterialOverrideMovieInfo_t.h"
#include "HbkMaterialOverrideInfo_t.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FHbkMaterialOverrideInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMaterialOverrideMatInfo_t> MaterialInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMaterialOverrideMovieInfo_t MovieInfo;
    
    HIBIKI_API FHbkMaterialOverrideInfo_t();
};

