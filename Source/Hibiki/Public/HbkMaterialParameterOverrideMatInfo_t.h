#pragma once
#include "CoreMinimal.h"
#include "HbkMaterialParameterOverrideParamInfo_t.h"
#include "HbkMaterialParameterOverrideMatInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkMaterialParameterOverrideMatInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName materialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMaterialParameterOverrideParamInfo_t> ParamArray;
    
    HIBIKI_API FHbkMaterialParameterOverrideMatInfo_t();
};

