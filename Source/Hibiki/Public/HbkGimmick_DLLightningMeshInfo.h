#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_DLLightningMeshInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_DLLightningMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialName;
    
    HIBIKI_API FHbkGimmick_DLLightningMeshInfo();
};

