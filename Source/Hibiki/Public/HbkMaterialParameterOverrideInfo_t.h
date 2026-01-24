#pragma once
#include "CoreMinimal.h"
#include "HbkMaterialParameterOverrideMatInfo_t.h"
#include "HbkMaterialParameterOverrideInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkMaterialParameterOverrideInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMaterialParameterOverrideMatInfo_t> MaterialArray;
    
    HIBIKI_API FHbkMaterialParameterOverrideInfo_t();
};

