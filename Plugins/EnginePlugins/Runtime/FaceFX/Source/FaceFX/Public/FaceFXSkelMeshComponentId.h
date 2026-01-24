#pragma once
#include "CoreMinimal.h"
#include "FaceFXSkelMeshComponentId.generated.h"

USTRUCT(BlueprintType)
struct FFaceFXSkelMeshComponentId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FACEFX_API FFaceFXSkelMeshComponentId();
};

