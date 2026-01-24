#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_DLLightningMeshInfo.h"
#include "HbkGimmick_DLCloud.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_DLCloud {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_DLLightningMeshInfo Mesh;
    
    HIBIKI_API FHbkGimmick_DLCloud();
};

