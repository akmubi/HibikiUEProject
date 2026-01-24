#pragma once
#include "CoreMinimal.h"
#include "HbkMovementRepParam.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkMovementRepParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunMoveMode;
    
    FHbkMovementRepParam();
};

