#pragma once
#include "CoreMinimal.h"
#include "HbkMaterialOverrideInfo_t.h"
#include "HbkMaterialOverrideExtIntInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkMaterialOverrideExtIntInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMaterialOverrideInfo_t> OverrideInfoArray;
    
    HIBIKI_API FHbkMaterialOverrideExtIntInfo_t();
};

