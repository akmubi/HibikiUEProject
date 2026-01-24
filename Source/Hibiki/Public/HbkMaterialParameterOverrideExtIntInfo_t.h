#pragma once
#include "CoreMinimal.h"
#include "HbkMaterialParameterOverrideInfo_t.h"
#include "HbkMaterialParameterOverrideExtIntInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkMaterialParameterOverrideExtIntInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMaterialParameterOverrideInfo_t> InfoArray;
    
    HIBIKI_API FHbkMaterialParameterOverrideExtIntInfo_t();
};

