#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickEmissiveParam_t.h"
#include "HbkGimmickEmissiveExtIntParam_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickEmissiveExtIntParam_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickEmissiveParam_t> EmissiveParamArray;
    
    HIBIKI_API FHbkGimmickEmissiveExtIntParam_t();
};

