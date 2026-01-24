#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmickScaleAnimData_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickScaleAnimData_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MultiplyValue;
    
    HIBIKI_API FHbkGimmickScaleAnimData_t();
};

