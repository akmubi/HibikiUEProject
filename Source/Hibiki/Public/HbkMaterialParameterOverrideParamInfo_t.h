#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkMaterialParameterOverrideParamInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkMaterialParameterOverrideParamInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScalarParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor VectorParam;
    
    HIBIKI_API FHbkMaterialParameterOverrideParamInfo_t();
};

