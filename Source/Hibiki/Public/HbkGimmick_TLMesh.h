#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_TLIntensityType.h"
#include "HbkGimmick_TLMesh.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_TLMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_TLIntensityType IntensityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeIntensity;
    
    HIBIKI_API FHbkGimmick_TLMesh();
};

