#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickRotationAnimParam.h"
#include "HbkGimmickRotationExtIntParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickRotationExtIntParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickRotationAnimParam AnimParam;
    
    HIBIKI_API FHbkGimmickRotationExtIntParam();
};

