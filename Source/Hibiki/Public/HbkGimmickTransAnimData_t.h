#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmickTransAnimData_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickTransAnimData_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector moveValue;
    
    HIBIKI_API FHbkGimmickTransAnimData_t();
};

