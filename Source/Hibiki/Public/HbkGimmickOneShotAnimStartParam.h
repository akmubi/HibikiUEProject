#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickOneShotAnimStartType.h"
#include "HbkGimmickOneShotAnimStartParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickOneShotAnimStartParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickOneShotAnimStartType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtInt;
    
    HIBIKI_API FHbkGimmickOneShotAnimStartParam();
};

